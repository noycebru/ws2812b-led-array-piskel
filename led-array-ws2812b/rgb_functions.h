//wrapper contruct *see defines.h line 1*
#ifndef RGB_FUNCTIONS_H
#define RGB_FUNCTIONS_H

#include "defines.h"

// Convert an ABGR 8/8/8/8 bitmap to RGB 5/6/5 used by Adafruit_GFX
void fixdrawRGBBitmap(int16_t x, int16_t y, const uint32_t *bitmap, int16_t w, int16_t h) {
  
  uint16_t RGB_bmp_fixed[w * h];
  
  for (uint16_t pixel = 0; pixel < w * h; pixel++) {
    uint32_t a8b8g8r8 = bitmap[pixel];
    uint8_t r5 = ((a8b8g8r8 >>  0) & 0xFF) >> (8 - 5);
    uint8_t g6 = ((a8b8g8r8 >>  8) & 0xFF) >> (8 - 6);
    uint8_t b5 = ((a8b8g8r8 >> 16) & 0xFF) >> (8 - 5);
    RGB_bmp_fixed[pixel] = (r5 << 11) | (g6 << 5) | b5;
  }
  matrix->drawRGBBitmap(x, y, RGB_bmp_fixed, w, h);  
}

// Display bitmap
void display_rgbBitmap(uint8_t bmp_num) {
  
  static uint16_t bmx, bmy;
  
  fixdrawRGBBitmap(bmx, bmy, RGB_bmp[bmp_num], 12, 12);
  bmx += 12;
  if (bmx >= mw) bmx = 0;
  if (!bmx) bmy += 12;
  if (bmy >= mh) bmy = 0;
  matrix->show(); 
}

//End of wrapper contruct
#endif
