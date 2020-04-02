//Wrapper contruct to include defines.h only once if included multiple times
#ifndef DEFINES_H
#define DEFINES_H

//includes for esp/adafruit matrix functions
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <ESP8266WiFi.h>

//?????
#define FASTLED_ESP8266_RAW_PIN_ORDER

// Define matrix width and height.
#define mw 12
#define mh 12

// Which pin on the Arduino is connected to the NeoPixels
#define PIN 14

//LED color definitions

#define LED_BLACK    0

#define LED_RED_VERYLOW   (3 <<  11)
#define LED_RED_LOW       (7 <<  11)
#define LED_RED_MEDIUM    (15 << 11)
#define LED_RED_HIGH      (31 << 11)

#define LED_GREEN_VERYLOW (1 <<  5)   
#define LED_GREEN_LOW     (15 << 5)  
#define LED_GREEN_MEDIUM  (31 << 5)  
#define LED_GREEN_HIGH    (63 << 5)  

#define LED_BLUE_VERYLOW  3
#define LED_BLUE_LOW      7
#define LED_BLUE_MEDIUM   15
#define LED_BLUE_HIGH     31

#define LED_ORANGE_VERYLOW  (LED_RED_VERYLOW + LED_GREEN_VERYLOW)
#define LED_ORANGE_LOW      (LED_RED_LOW     + LED_GREEN_LOW)
#define LED_ORANGE_MEDIUM   (LED_RED_MEDIUM  + LED_GREEN_MEDIUM)
#define LED_ORANGE_HIGH     (LED_RED_HIGH    + LED_GREEN_HIGH)

#define LED_PURPLE_VERYLOW  (LED_RED_VERYLOW + LED_BLUE_VERYLOW)
#define LED_PURPLE_LOW      (LED_RED_LOW     + LED_BLUE_LOW)
#define LED_PURPLE_MEDIUM   (LED_RED_MEDIUM  + LED_BLUE_MEDIUM)
#define LED_PURPLE_HIGH     (LED_RED_HIGH    + LED_BLUE_HIGH)

#define LED_CYAN_VERYLOW    (LED_GREEN_VERYLOW + LED_BLUE_VERYLOW)
#define LED_CYAN_LOW        (LED_GREEN_LOW     + LED_BLUE_LOW)
#define LED_CYAN_MEDIUM     (LED_GREEN_MEDIUM  + LED_BLUE_MEDIUM)
#define LED_CYAN_HIGH       (LED_GREEN_HIGH    + LED_BLUE_HIGH)

#define LED_WHITE_VERYLOW   (LED_RED_VERYLOW + LED_GREEN_VERYLOW + LED_BLUE_VERYLOW)
#define LED_WHITE_LOW       (LED_RED_LOW     + LED_GREEN_LOW     + LED_BLUE_LOW)
#define LED_WHITE_MEDIUM    (LED_RED_MEDIUM  + LED_GREEN_MEDIUM  + LED_BLUE_MEDIUM)
#define LED_WHITE_HIGH      (LED_RED_HIGH    + LED_GREEN_HIGH    + LED_BLUE_HIGH)

// Max is 255, 32 is a conservative value to not overload
// a USB power supply (500mA) for 12x12 pixels.
#define BRIGHTNESS 64

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoMatrix* matrix = new Adafruit_NeoMatrix(mw, mh, PIN,
                                                    NEO_MATRIX_TOP  + NEO_MATRIX_LEFT +
                                                    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
                                                    NEO_GRB         + NEO_KHZ800);
  
//Globals
int counter = 0;
int noyce = 0;

//End of wrapper contruct
#endif 
