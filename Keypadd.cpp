#include "Keypadd.h"

// Define ROWS and COLS if not already defined
#define ROWS 4
#define COLS 4

// Define the pin arrays
uint8_t rowPins[ROWS] = { 13, 12, 11, 10 };
uint8_t colPins[COLS] = { 9, 8, 7, 6 };

char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

// extern Adafruit_NeoPixel NeoPixel = Adafruit_NeoPixel(10, 5, NEO_GRB + NEO_KHZ800);
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


void checkKeyPadValue() {
  char key = keypad.getKey();
  
  if (key) { // Check if a key is pressed
    switch (key) {
      case '1': setColorMagenta(); break;
      case '2': setColorPink(); break;
      case '3': setColorPurple(); break;
      case '4': setColorOrange(); break;
      case '5': setColorSilver(); break;
      case '6': setColorGold(); break;
      case '7': setColorTurquoise(); break;
      case '8': setColorCoral(); break;
      case '9': setColorLemonGreen(); break;
      default: break; 
    }
  }
}

void setColorMagenta() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 0, 255));
  }
  NeoPixel.show();
  delay(3000);
}

void setColorPink() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 192, 203));
  }
  NeoPixel.show();
}

void setColorPurple() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(128, 0, 128));
  }
  NeoPixel.show();
}

void setColorOrange() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 165, 0));
  }
  NeoPixel.show();
}

void setColorSilver() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(192, 192, 192));
  }
  NeoPixel.show();
}

void setColorGold() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 215, 0));
  }
  NeoPixel.show();
}

void setColorTurquoise() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(64, 224, 208));
  }
  NeoPixel.show();
}

void setColorCoral() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(255, 127, 80));
  }
  NeoPixel.show();
}

void setColorLemonGreen() {
  for (int i = 0; i < NeoPixel.numPixels(); i++) {
    NeoPixel.setPixelColor(i, NeoPixel.Color(50, 205, 50));
  }
  NeoPixel.show();
}
