#define LDR_PIN A0
#define  slider A1 

float lux;
const float GAMMA = 0.7;
const float RL10 = 50;
void setup() {
  Serial.begin(9600);
  pinMode(LDR_PIN, INPUT);
}

void loop() {


  //Converting the value to lux
  int analogValue = analogRead(LDR_PIN);
    float voltage = analogValue / 1024.0 * 5.0;
    float resistance = 2000 * voltage / (1 - voltage / 5.0);
    lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));

  Serial.println(lux);
  delay(1000); // Adjust delay as needed
}
