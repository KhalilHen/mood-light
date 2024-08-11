#ifndef KEYPADD_H
#define KEYPADD_H

#include <Keypad.h>
#include <Adafruit_NeoPixel.h> 

const uint8_t ROWS = 4;
const uint8_t COLS = 4;
extern char keys[ROWS][COLS];
extern uint8_t rowPins[ROWS];
extern uint8_t colPins[COLS];


uint8_t rowPins[ROWS] = { 13, 12, 11, 10 }; 
uint8_t colPins[COLS] = { 9, 8, 7, 6 };    

extern Keypad keypad;
extern Adafruit_NeoPixel NeoPixel;

void checkKeyPadValue();

#endif
