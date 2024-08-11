#ifndef NEOPIXEL_H
#define NEOPIXEL_H

#include <Adafruit_NeoPixel.h>

#define PIN_NEO_PIXEL 4
#define NUM_PIXELS 20
#define DELAY_INTERVAL 250

extern Adafruit_NeoPixel NeoPixel;

void setColorWarmWhite();
void setColorSoftYellow();
void setColorRed();
void setColorSoftBlue();
void setColorLightGreen();
void setColorBrightBlue();
void setColorCoolWhite();
void setColorCoolBlue();
void setColorWhiteLight();
void setColorCyan(); 

#endif