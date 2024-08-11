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



readSliderValue();

  NeoPixel.clear();  // set all pixel colors to 'off'. It only takes effect if pixels.show() is called
if(!turnOffLED) {

 for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {           // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(0, 255, 0));  // it only takes effect if pixels.show() is called
    NeoPixel.show();         
                                  // send the updated pixel colors to the NeoPixel hardware.

    delay(DELAY_INTERVAL);  // pause between each pixel
  } 

 NeoPixel.clear();

//This is how you adjust the brightness
//   NeoPixel.setBrightness(10);
  NeoPixel.show();  // send mn updated pixel colors to the NeoPixel hardware.
  delay(2000); 

} else {
  Serial.println("Light turned off");
}


  




  //Converting the value to lux
  int analogValue = analogRead(LDR_PIN);
    float voltage = analogValue / 1024.0 * 5.0;
    float resistance = 2000 * voltage / (1 - voltage / 5.0);
    lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));

  Serial.println(lux);

  //  checkButtonValue();
  delay(1000); // Adjust delay as needed
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

            Serial.println(turnOffLED ? "Beep is turned off" : "Beep is turned on");

    }
    else {

            Serial.println("Button is released");

    }
    oldButtonValue = buttonValue;

   }

}