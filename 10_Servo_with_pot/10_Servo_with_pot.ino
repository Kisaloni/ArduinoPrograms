#include<Servo.h>
#define pot A0
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(pot);
  Serial.println(val);
  val=map(val,0,1023,0,180);
  Serial.println(val);
  myservo.write(val);
  delay(500);
}
