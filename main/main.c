#include "bmp.h"
#include "rgb_functions.h"
  
void setup() {
  
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  // Test full bright of all LEDs. If brightness is too high
  // for your current limit (i.e. USB), decrease it.
  //matrix->fillScreen(LED_WHITE_HIGH);
  //matrix->show();
  //delay(1000);
  matrix->clear();
  noyce = (sizeof(RGB_bmp) / sizeof(RGB_bmp[0]));
}

void loop() {

  // clear the screen after X bitmaps have been displayed and we
  // loop back to the top left corner
  // 8x8 => 1, 16x8 => 2, 17x9 => 6
  static uint8_t pixmap_count = ((mw + 7) / 12) * ((mh + 7) / 12);
  // Cycle through red, green, blue, display 2 checkered patterns
  // useful to debug some screen types and alignment.

  Serial.print("Screen pixmap capacity: ");
  Serial.println(pixmap_count);

  display_rgbBitmap(counter++);
  delay(500);

  if (counter >= noyce) {
    counter = 0;
  }

  Serial.println ("----------------------------------------------------------------");
  //delay(1000);
}