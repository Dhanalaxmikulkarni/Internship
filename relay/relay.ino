#define LED1 2
#define LED2 0
void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}
void loop()
{
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(100);
  digitalWrite(LED2,LOW);
  delay(100);
}
