int ledpin=13;
int ledpin1=12;
int ledpin2=7;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
 digitalWrite(13,HIGH);
 delay(300);
 digitalWrite(13,LOW);
 delay(300);
 digitalWrite(7,HIGH);
 delay(3000);
 digitalWrite(7,LOW);
 delay(300);
 digitalWrite(12,HIGH);
 delay(300);
 digitalWrite(12,LOW);
 delay(300);
 // put your main code here, to run repeatedly:

}
