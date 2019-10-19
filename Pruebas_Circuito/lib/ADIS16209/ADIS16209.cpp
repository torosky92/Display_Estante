////////////////////////////////////////////////////////////////////////////////////////////////////////
//  October 2015
//  Author: Juan Jose Chong <juan.chong@analog.com>
////////////////////////////////////////////////////////////////////////////////////////////////////////
//  ADIS16209.cpp
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  This library provides all the functions necessary to interface the ADIS16209 Inclinometer with an 
//  8-Bit Atmel-based Arduino development board. Functions for SPI configuration, reads and writes,
//  and scaling are included. This library may be used for the entire ADIS1620x family of devices 
//  with some modification.
//
//  This example is free software. You can redistribute it and/or modify it
//  under the terms of the GNU Lesser Public License as published by the Free Software
//  Foundation, either version 3 of the License, or any later version.
//
//  This example is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
//  FOR A PARTICULAR PURPOSE.  See the GNU Lesser Public License for more details.
//
//  You should have received a copy of the GNU Lesser Public License along with 
//  this example.  If not, see <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ADIS16209.h"

////////////////////////////////////////////////////////////////////////////
// Constructor with configurable CS, DR, and RST
////////////////////////////////////////////////////////////////////////////
// CS - Chip select pin
// DR - DR output pin for data ready
// RST - Hardware reset pin
////////////////////////////////////////////////////////////////////////////
ADIS16209::ADIS16209(int CS, int DR, int RST) {
  _CS = CS;
  _DR = DR;
  _RST = RST;

  SPI.begin(); // Initialize SPI bus
  configSPI(); // Configure SPI

//Set default pin states
  pinMode(_CS, OUTPUT); // Set CS pin to be an output
  pinMode(_DR, INPUT); // Set DR pin to be an input
  pinMode(_RST, OUTPUT); // Set RST pin to be an output
  digitalWrite(_CS, HIGH); // Initialize CS pin to be high
  digitalWrite(_RST, HIGH); // Initialize RST pin to be high
}

////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////
ADIS16209::~ADIS16209() {
  // Close SPI bus
  SPI.end();
}

////////////////////////////////////////////////////////////////////////////
// Performs a hardware reset by setting _RST pin low for delay (in ms).
////////////////////////////////////////////////////////////////////////////
int ADIS16209::resetDUT(uint8_t ms) {
  digitalWrite(_RST, LOW);
  delay(100);
  digitalWrite(_RST, HIGH);
  delay(ms);
  return(1);
}

////////////////////////////////////////////////////////////////////////////
// Sets SPI bit order, clock divider, and data mode. This function is useful
// when there are multiple SPI devices using different settings.
// Returns 1 when complete.
////////////////////////////////////////////////////////////////////////////
int ADIS16209::configSPI() {
  SPI.setBitOrder(MSBFIRST); // Per the datasheet
  SPI.setClockDivider(SPI_CLOCK_DIV16); // Config for 1MHz
  SPI.setDataMode(SPI_MODE3); // Clock base at one, sampled on falling edge
  return(1);
}

////////////////////////////////////////////////////////////////////////////////////////////
// Reads two bytes (one word) in two sequential registers over SPI
////////////////////////////////////////////////////////////////////////////////////////////
// regAddr - address of register to be read
// return - (int) signed 16 bit 2's complement number
////////////////////////////////////////////////////////////////////////////////////////////
int16_t ADIS16209::regRead(uint8_t regAddr) {
//Read registers using SPI
  
  // Write register address to be read
  digitalWrite(_CS, LOW); // Set CS low to enable device
  SPI.transfer(regAddr); // Write address over SPI bus
  SPI.transfer(0x00); // Write 0x00 to the SPI bus fill the 16 bit transaction requirement
  digitalWrite(_CS, HIGH); // Set CS high to disable device

  delayMicroseconds(25); // Delay to not violate read rate (40us)

  // Read data from requested register
  digitalWrite(_CS, LOW); // Set CS low to enable device
  uint8_t _msbData = SPI.transfer(0x00); // Send (0x00) and place upper byte into variable
  uint8_t _lsbData = SPI.transfer(0x00); // Send (0x00) and place lower byte into variable
  digitalWrite(_CS, HIGH); // Set CS high to disable device

  delayMicroseconds(25); // Delay to not violate read rate (40us)
  
  // Shift MSB data left by 8 bits, mask LSB data with 0xFF, and OR both bits
  uint16_t _dataOut = (_msbData << 8) | (_lsbData & 0xFF); // Concatenate upper and lower bytes
  
  return(_dataOut);
}

////////////////////////////////////////////////////////////////////////////
// Writes one byte of data to the specified register over SPI.
// Returns 1 when complete.
////////////////////////////////////////////////////////////////////////////
// regAddr - address of register to be written
// regData - data to be written to the register
////////////////////////////////////////////////////////////////////////////
int ADIS16209::regWrite(uint8_t regAddr, int16_t regData) {

  // Write register address and data
  uint16_t addr = (((regAddr & 0x7F) | 0x80) << 8); // Toggle sign bit, and check that the address is 8 bits
  uint16_t lowWord = (addr | (regData & 0xFF)); // OR Register address (A) with data(D) (AADD)
  uint16_t highWord = ((addr | 0x100) | ((regData >> 8) & 0xFF)); // OR Register address with data and increment address

  // Split words into chars
  uint8_t highBytehighWord = (highWord >> 8);
  uint8_t lowBytehighWord = (highWord & 0xFF);
  uint8_t highBytelowWord = (lowWord >> 8);
  uint8_t lowBytelowWord = (lowWord & 0xFF);

  // Write highWord to SPI bus
  digitalWrite(_CS, LOW); // Set CS low to enable device
  SPI.transfer(highBytehighWord); // Write high byte from high word to SPI bus
  SPI.transfer(lowBytehighWord); // Write low byte from high word to SPI bus
  digitalWrite(_CS, HIGH); // Set CS high to disable device

  delayMicroseconds(40); // Delay to not violate read rate (40us)

  // Write lowWord to SPI bus
  digitalWrite(_CS, LOW); // Set CS low to enable device
  SPI.transfer(highBytelowWord); // Write high byte from low word to SPI bus
  SPI.transfer(lowBytelowWord); // Write low byte from low word to SPI bus
  digitalWrite(_CS, HIGH); // Set CS high to disable device

  return(1);
}

/////////////////////////////////////////////////////////////////////////////////////////
// Converts accelerometer data output from the regRead() function and returns
// acceleration in mg's
/////////////////////////////////////////////////////////////////////////////////////////
// sensorData - data output from regRead()
// return - (float) signed/scaled accelerometer in mg's
/////////////////////////////////////////////////////////////////////////////////////////
float ADIS16209::accelScale(int16_t sensorData)
{
  int signedData = 0;
  sensorData = sensorData & 0x3FFF; // Discard upper two bits
  int isNeg = sensorData & 0x2000;
  if (isNeg == 0x2000) // If the number is negative, scale and sign the output
    signedData = sensorData - 0x3FFF;
  else
    signedData = sensorData;
  float finalData = signedData * 0.24414; // Multiply by accel sensitivity (244.14 uG/LSB)
  return finalData;
}

/////////////////////////////////////////////////////////////////////////////////////////////
// Converts incline angle data output from the regRead() function and returns incline angle
// in degrees
/////////////////////////////////////////////////////////////////////////////////////////////
// sensorData - data output from regRead()
// return - (float) signed/scaled incline or rotation in degrees
/////////////////////////////////////////////////////////////////////////////////////////
float ADIS16209::inclineScale(int16_t sensorData)
{
  int signedData = 0;
  sensorData = sensorData & 0x3FFF; // Discard upper two bits
  int isNeg = sensorData & 0x2000;
  if (isNeg == 0x2000) // If the number is negative, scale and sign the output
    signedData = sensorData - 0x3FFF;
  else
    signedData = sensorData;
  float finalData = signedData * 0.025; // Multiply by (0.025 degrees/LSB)
  return finalData;
}

/////////////////////////////////////////////////////////////////////////////////////////////
// Converts temperature data output from the regRead() function and returns temperature 
// in degrees Celcius
/////////////////////////////////////////////////////////////////////////////////////////////
// sensorData - data output from regRead()
// return - (float) signed/scaled temperature in degrees Celcius
/////////////////////////////////////////////////////////////////////////////////////////
float ADIS16209::tempScale(int16_t sensorData)
{
  sensorData = sensorData & 0x0FFF; // Discard upper two bits
  float finalData = (((sensorData - 1278) * -0.47) + 25); // Multiply by temperature scale. 25C = 0x04FE
  return finalData;
}

/////////////////////////////////////////////////////////////////////////////////////////////
// Converts voltage supply data output from the regRead() function and returns voltage 
// in volts.
/////////////////////////////////////////////////////////////////////////////////////////////
// sensorData - data output from regRead()
// return - (float) signed/scaled voltage in Volts
/////////////////////////////////////////////////////////////////////////////////////////
float ADIS16209::supplyScale(int16_t sensorData)
{
  sensorData = sensorData & 0x3FFF; // Discard upper two bits
  float finalData = sensorData * 0.000305176; // Multiply by 0.000305176 Volts/LSB)
  return finalData;
}
