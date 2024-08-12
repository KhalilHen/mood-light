#ifndef KEYPADD_H
#define KEYPADD_H

#include <Keypad.h>
#include <Adafruit_NeoPixel.h>

#define ROWS 4
#define COLS 4

extern uint8_t rowPins[ROWS];
extern uint8_t colPins[COLS];
extern Adafruit_NeoPixel NeoPixel; 
 
extern Keypad keypad;

void checkKeyPadValue();
void setColorMagenta();
void setColorPink();
void setColorPurple();
void setColorOrange();
void setColorSilver();
void setColorGold();
void setColorTurquoise();
void setColorCoral();
void setColorLemonGreen();

#endif // KEYPADD_H
