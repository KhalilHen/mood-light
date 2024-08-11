#ifndef NEOPIXEL_H
#define NEOPIXEL_H

#include <Adafruit_NeoPixel.h>

#define PIN_NEO_PIXEL 4
#define NUM_PIXELS 20
#define DELAY_INTERVAL 250

extern Adafruit_NeoPixel NeoPixel;

void setColorBlue();
void setColorDarkPurple();
void setColorGreen();
void setColorYellow();
void setColorMagenta();
void setColorPurple();
void setColorLightCyan();
void setColorWhite();

#endif