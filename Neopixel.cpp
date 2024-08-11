#include "Neopixel.h"
// #include <Arduino>
Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);



//Warm white color (0-50)
//Warm white color (51-200)
void setColorWarmWhite() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 255, 128));
  }
  NeoPixel.show();

}
//Soft yellow color (0-50)
void setColorSoftYellow() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 255, 180));
  }
  NeoPixel.show();
}

//Red color (0-50)
void setColorRed() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 0, 0));
  }
  NeoPixel.show();
}


//Soft blue color (51-200)
void setColorSoftBlue() { 

 for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(173, 216, 230));
  }
  NeoPixel.show();

}
//Light green color (51-200)
//light green color (201-500)

void setColorLightGreen() {

  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(144, 238, 144));
  }
  NeoPixel.show();
}




//Bright blue color (201-500 lux)
void setColorBrightBlue() {

for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(0, 0, 255));
  }
  NeoPixel.show();



}

//Cool white colot (201-500)
void setColorCoolWhite() {

  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(240, 240, 240));
  }
  NeoPixel.show();

}



//  Color (501+)
void setColorCoolBlue() {

 for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(144, 238, 144));
  }
  NeoPixel.show();
}

//  (501+)
void setColorWhiteLight() {

 for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(240, 240, 240));
  }
  NeoPixel.show();


}
//   (501+)
void setColorCyan() {
   for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(224, 255, 255));
  }
  NeoPixel.show();
}
