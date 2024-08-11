void setColorBlue() {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 255)); 
  }
  strip.show();
}


void setColorDarkPurple() {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(75, 0, 130)); 
  }
  strip.show();
}



//Moderate light  200-500 lux

void setColorGreen() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(0, 255, 0));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}
void setColorYellow() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 255, 0));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}




void setColorMagenta() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 0, 255));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}



void setColorPurple() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(128, 0, 128));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}

//Above 1000+ Lux
void setColorLightCyan() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(224, 255, 255));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}


void setColorWhite() {
for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 255, 255));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 
}




