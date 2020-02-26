int blue = 7;
int red = 6;
int buzz = 2;
void setup() {
 pinMode(blue,OUTPUT);
 pinMode(red,OUTPUT);
 pinMode(buzz,OUTPUT);
}

void loop() {
digitalWrite(buzz,HIGH);
delay(300);
digitalWrite(buzz,LOW);
delay(300);
 digitalWrite(blue,HIGH);
 delay(300);
 digitalWrite(blue,LOW);
 delay(300);
 digitalWrite(blue,HIGH);
 delay(300);
 digitalWrite(blue,LOW);
 delay(300);
 digitalWrite(red,HIGH);
 delay(300);
 digitalWrite(red,LOW);
 delay(300);


}
