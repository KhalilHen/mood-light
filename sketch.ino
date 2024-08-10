#define LDR_PIN A0
#define  slider A1 


//Neopixel

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>  // Required for 16 MHz Adafruit Trinket
#endif

#define PIN_NEO_PIXEL 4  // Arduino pin that connects to NeoPixel

#define NUM_PIXELS 20    // The number of LEDs (pixels) on NeoPixel

#define DELAY_INTERVAL 250 
Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);


//Button code
#define buttonPin 2


int oldButtonValue = LOW; 









//Photoressitor 
float lux;
const float GAMMA = 0.7;
const float RL10 = 50;
void setup() {

  NeoPixel.begin();

  Serial.begin(9600);
  pinMode(LDR_PIN, INPUT);


  //button
  pinMode(buttonPin, INPUT_PULLUP);


}

void loop() {




   
  NeoPixel.clear();  // set all pixel colors to 'off'. It only takes effect if pixels.show() is called

 for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(0, 255, 0));  // it only takes effect if pixels.show() is called
    NeoPixel.show();                                           // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 

   NeoPixel.clear();
  NeoPixel.show();  // send mn updated pixel colors to the NeoPixel hardware.
  delay(2000); 


  // turn on all pixels to red at the same time for two seconds
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(255, 0, 0));  // it only takes effect if pixels.show() is called
  }
  NeoPixel.show();  // send the updated pixel colors to the NeoPixel hardware.
  delay(2000);      // on time

  // turn off all pixels for one seconds
  NeoPixel.clear();
  NeoPixel.show();  // send the updated pixel colors to the NeoPixel hardware.
  delay(2000); 




  //Converting the value to lux
  int analogValue = analogRead(LDR_PIN);
    float voltage = analogValue / 1024.0 * 5.0;
    float resistance = 2000 * voltage / (1 - voltage / 5.0);
    lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));

  Serial.println(lux);
  
  //  checkButtonValue();
  delay(1000); // Adjust delay as needed
}


void checkButtonValue() {

   int buttonValue = digitalRead(buttonPin);
   if (buttonValue != oldButtonValue) {

    delay(50);

    buttonValue = digitalRead(buttonPin);
    if (buttonValue == LOW)  {
      Serial.println("Button is pressed");

   //TODO Add logic here   
    }
    else {

            Serial.println("Button is released");

    }
    oldButtonValue = buttonValue;

   }

}