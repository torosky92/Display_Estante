
/*******************************************************************************
* image
* filename: unsaved
* name: DM_Logo
*
* preset name: Monochrome
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Diffuse Dither 128
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint8_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <pgmspace.h>

const uint8_t logo[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xac, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x55, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x52, 0x94, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x95, 0x55, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x54, 0xaa, 0x52, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xaa, 0xa9, 0x4a, 0xa9, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xa6, 0xaa, 0x95, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x06, 0xaa, 0xa5, 0x55, 0x55, 0x55, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x2a, 0xaa, 0x95, 0x29, 0x2a, 0x52, 0x95, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x4a, 0x55, 0x40, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x07, 0x5a, 0xaa, 0xaa, 0xaa, 0xa9, 0x55, 0x54, 0xa8, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x34, 0xab, 0x55, 0x55, 0x55, 0x55, 0x2a, 0xa5, 0x15, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x55, 0x55, 0x6a, 0xaa, 0xa4, 0xa5, 0x55, 0x52, 0x48, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x05, 0xab, 0x6a, 0xaa, 0xa9, 0x55, 0x55, 0x52, 0x09, 0x25, 0x50, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x3a, 0xad, 0x55, 0x55, 0x55, 0x2a, 0xaa, 0xa9, 0x64, 0xa9, 0x2a, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x4a, 0xb5, 0x56, 0xad, 0xaa, 0xaa, 0x94, 0x94, 0x95, 0x14, 0x84, 0x80, 0x00, 0x00, 
    0x00, 0x06, 0xb5, 0x55, 0x5a, 0xd5, 0x56, 0xaa, 0xaa, 0x45, 0x22, 0xa2, 0x52, 0x40, 0x00, 0x00, 
    0x00, 0x0a, 0xd6, 0xaa, 0xaa, 0xaa, 0xb5, 0x55, 0x52, 0xa8, 0x94, 0x55, 0x29, 0x28, 0x00, 0x00, 
    0x00, 0x15, 0x55, 0x6a, 0xd5, 0x5a, 0xd5, 0xaa, 0xa9, 0x25, 0x52, 0x88, 0x94, 0x95, 0x00, 0x00, 
    0x00, 0x0a, 0xaa, 0xab, 0x55, 0x6b, 0x55, 0x54, 0x04, 0x92, 0x49, 0x52, 0xa2, 0x42, 0x40, 0x00, 
    0x00, 0x15, 0x55, 0xad, 0x5a, 0xaa, 0xaa, 0xa8, 0x55, 0x49, 0x24, 0x2a, 0x4a, 0xa9, 0x20, 0x00, 
    0x00, 0x0a, 0xaa, 0xaa, 0xab, 0x55, 0x56, 0x80, 0x02, 0x2a, 0x95, 0x84, 0x91, 0x14, 0x90, 0x00, 
    0x00, 0x15, 0x55, 0x55, 0x55, 0x55, 0x58, 0x00, 0x01, 0x49, 0x48, 0x52, 0x4a, 0x42, 0x50, 0x00, 
    0x00, 0x15, 0x55, 0x5a, 0xaa, 0xad, 0xa0, 0x00, 0x00, 0x24, 0x25, 0x55, 0x29, 0x2a, 0xa8, 0x00, 
    0x00, 0x0a, 0xaa, 0xaa, 0xda, 0xd5, 0x00, 0x00, 0x00, 0x12, 0xaa, 0x48, 0xa4, 0x95, 0x50, 0x00, 
    0x00, 0x15, 0x25, 0x55, 0x55, 0x58, 0x00, 0x00, 0x00, 0x05, 0x49, 0x25, 0x12, 0x54, 0xa0, 0x00, 
    0x00, 0x0a, 0xaa, 0xa5, 0x56, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x24, 0x92, 0x4a, 0xaa, 0x90, 0x00, 
    0x00, 0x15, 0x55, 0x2a, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x29, 0x49, 0x55, 0x52, 0xa8, 0x00, 
    0x00, 0x15, 0x54, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x24, 0xaa, 0xaa, 0x50, 0x00, 
    0x00, 0x0a, 0xaa, 0xa9, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x95, 0x52, 0x4a, 0xa0, 0x00, 
    0x00, 0x15, 0x55, 0x55, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x4a, 0xaa, 0x98, 0x00, 
    0x00, 0x15, 0x55, 0x54, 0x94, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xa9, 0x50, 0x00, 
    0x00, 0x0a, 0xaa, 0xa2, 0x4a, 0x90, 0x00, 0x00, 0x00, 0x00, 0x05, 0xaa, 0x55, 0x55, 0x48, 0x00, 
    0x00, 0x15, 0x55, 0x15, 0x24, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xaa, 0xaa, 0x4a, 0xa0, 0x00, 
    0x00, 0x16, 0xa8, 0xa2, 0x92, 0xa2, 0x40, 0x00, 0x00, 0x00, 0xad, 0x55, 0x55, 0x54, 0xa8, 0x00, 
    0x00, 0x0a, 0xa5, 0x14, 0x55, 0x15, 0x20, 0x00, 0x00, 0x05, 0x55, 0x6a, 0xa9, 0x55, 0x50, 0x00, 
    0x00, 0x15, 0x52, 0x52, 0x90, 0xa8, 0x9a, 0x00, 0x00, 0x2b, 0x6a, 0xad, 0xaa, 0xaa, 0xa0, 0x00, 
    0x00, 0x15, 0x09, 0x49, 0x4a, 0x92, 0x44, 0x80, 0x00, 0xad, 0x55, 0xaa, 0xaa, 0xa5, 0x28, 0x00, 
    0x00, 0x08, 0xa4, 0x94, 0x54, 0xa5, 0x52, 0x40, 0x06, 0xb5, 0x56, 0xaa, 0xaa, 0x94, 0xa0, 0x00, 
    0x00, 0x15, 0x52, 0x45, 0x22, 0x49, 0x29, 0x28, 0x2a, 0xd5, 0x5a, 0xb5, 0x5a, 0xd5, 0x50, 0x00, 
    0x00, 0x04, 0x15, 0x29, 0x4a, 0x94, 0x84, 0xa5, 0x55, 0x55, 0x6a, 0xab, 0x6b, 0x55, 0x50, 0x00, 
    0x00, 0x02, 0xc0, 0x94, 0xa9, 0x22, 0x55, 0x15, 0xb6, 0xaa, 0xaa, 0xad, 0x55, 0x5a, 0xa8, 0x00, 
    0x00, 0x00, 0x2d, 0x4a, 0x14, 0x95, 0x24, 0xd6, 0xaa, 0xab, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00, 
    0x00, 0x00, 0x12, 0x21, 0x42, 0x52, 0x92, 0xaa, 0xaa, 0xb5, 0x56, 0xd5, 0x55, 0x55, 0x80, 0x00, 
    0x00, 0x00, 0x01, 0x55, 0x59, 0x48, 0x55, 0x55, 0x55, 0x55, 0x6a, 0xaa, 0xad, 0xac, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x4a, 0x25, 0x25, 0x56, 0xb5, 0x6b, 0x56, 0xaa, 0xb5, 0xb5, 0x50, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x11, 0x48, 0x95, 0x5a, 0xd6, 0xad, 0x6a, 0xaa, 0xaa, 0xaa, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x05, 0x25, 0x55, 0x6a, 0xaa, 0xaa, 0xaa, 0xb6, 0xd6, 0xaa, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0xaa, 0xaa, 0xd5, 0x55, 0xaa, 0xaa, 0xd0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x12, 0xaa, 0xaa, 0xab, 0x55, 0xad, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0a, 0xd5, 0x55, 0x6d, 0x5a, 0xb5, 0x55, 0x5a, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0xad, 0x56, 0xaa, 0xaa, 0xaa, 0xad, 0xa0, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xd5, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x5a, 0xd5, 0x56, 0xd5, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xab, 0x5a, 0xda, 0xab, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xab, 0x55, 0x55, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x55, 0x55, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xaa, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 0x56, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};