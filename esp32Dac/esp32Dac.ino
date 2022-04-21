// Potentiometer is connected to GPIO 34 (Analog ADC1_CH6)
const int potPin = 34;

// variable for storing the potentiometer value
int potValue = 0;

#define LED1 35
#define LED2 12
#define LED3 14
#define LED4 27
#define LED5 26

void setup() {
//  pinMode(LED1,OUTPUT);

  
  Serial.begin(115200);
  delay(1000);
  Serial.println("Starting");

}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  float v = potValue * 3.3 / 4095;
  Serial.print("Voltage: ");
  Serial.println(v);

  dacWrite(LED5, potValue);
  
  
  
}
