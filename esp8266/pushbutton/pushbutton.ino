#define LED 2
#define d5 14
int d4;
void setup()
{
  pinMode(d5, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  d4=0;
   
}
void loop()
{
  int a;
  a=digitalRead(d5);
  if(a==1)
  {
    delay(500);
    if(d4==0)
    {
      digitalWrite(LED, HIGH);
      d4=1;
    }
    else
    {
      digitalWrite(LED, LOW);
      d4=0;
    }

  }     
}
