#include <Arduino.h>

#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C
#define LED 13
#define PUL 14
Adafruit_SSD1306 display(-1);


void setup() {
  pinMode(LED,OUTPUT);
  pinMode(PUL,INPUT);
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

  // display a pixel in each corner of the screen
  display.drawPixel(0, 0, WHITE);
  display.drawPixel(127, 0, WHITE);
  display.drawPixel(0, 63, WHITE);
  display.drawPixel(127, 63, WHITE);

  // display a line of text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("Hello, world!");

  // update display with all of the above graphics
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PUL)==HIGH){
    display.setCursor(1,1);
    display.print("Pulsado!");
    display.display();
    digitalWrite(LED,LOW);
  }
  else{
    digitalWrite(LED,HIGH);
    display.clearDisplay();
    display.display();
  }
}