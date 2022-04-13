#define d5 14
void setup() {
  Serial.begin(115200);
  pinMode(d5, INPUT);// put your setup code here, to run once:

}
int count=0;
void loop() {
  int IR;
  IR=digitalRead(d5);
  if(IR==LOW)
  {
    if(IR==HIGH){
    count++;
    }
    Serial.println(count);
  }
  
   // put your main code here, to run repeatedly:
  
}
