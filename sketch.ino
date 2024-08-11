#include "Neopixel.h"

// Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);


#define LDR_PIN A0
#define  slider A1 



//Neopixel


//Button code
#define buttonPin 2
bool turnOffLED = false;

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

checkButtonValue();

readSliderValue();

readLightValue();

if(!turnOffLED) {
  NeoPixel.clear(); 
adjustColors();


 NeoPixel.clear();

//This is how you adjust the brightness
//   NeoPixel.setBrightness(10);
  NeoPixel.show();  // send mn updated pixel colors to the NeoPixel hardware.
  delay(2000); 

} else {
  Serial.println("Light turned off");
}


  





  Serial.println(lux);

  //  checkButtonValue();
  delay(1000); // Adjust delay as needed
}

void readLightValue() {

  int analogValue = analogRead(LDR_PIN);
    float voltage = analogValue / 1024.0 * 5.0;
    float resistance = 2000 * voltage / (1 - voltage / 5.0);
    lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));

}
void adjustColors() {


if (lux >= 0 && lux <= 200) {


    
    
    setColorYellow();

    delay(3000);
    
  }
  else if(lux >=  100 && lux <= 500 ) {
    setColorGreen();

  }

else if(lux >= 500) {

  setColorMagenta();

}
}
void readSliderValue() {

  
  
  int sliderValue = analogRead(slider);
  int LEDBrightness =  map(sliderValue, 0,  1023,   0,  255  );
  NeoPixel.setBrightness(LEDBrightness);


}
void checkButtonValue() {

   int buttonValue = digitalRead(buttonPin);
   if (buttonValue != oldButtonValue) {

    delay(50);

    buttonValue = digitalRead(buttonPin);
    if (buttonValue == LOW)  {
      Serial.println("Button is pressed");

   //TODO Add logic here  
          turnOffLED = !turnOffLED;  // Toggle beep state
      Serial.println(turnOffLED ? "LED is turned off" : "LED is turned on");


    }
    else {

            Serial.println("Button is released");

    }
    oldButtonValue = buttonValue;

   }

}