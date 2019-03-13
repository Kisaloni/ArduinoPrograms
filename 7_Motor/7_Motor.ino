# define swc 11
void setup() {
  // put your setup code here, to run once:
pinMode(swc,OUTPUT);
//pinMode(vcc,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(gnd,LOW);
digitalWrite(swc,LOW);
delay(1000);
digitalWrite(swc,HIGH);
delay(5000);
}
