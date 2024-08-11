#include "Neopixel.h"
// #include <Arduino>
Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);

void setColorBlue() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(0, 0, 255));
  }
  NeoPixel.show();
}

void setColorDarkPurple() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(75, 0, 130));
  }
  NeoPixel.show();
}

void setColorGreen() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(0, 255, 0));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}

void setColorYellow() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 255, 0));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}

void setColorMagenta() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 0, 255));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}

void setColorPurple() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(128, 0, 128));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}

void setColorLightCyan() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(224, 255, 255));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}

void setColorWhite() {
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 255, 255));
  }
  NeoPixel.show();
  delay(2000);  // If needed to have a pause after showing color
}
