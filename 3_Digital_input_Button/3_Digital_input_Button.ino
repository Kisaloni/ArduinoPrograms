#define switch 2
void setup() {
  // put your setup code here, to run once:
pinMode(switch,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val=digitalRead(switch);
Serial.println(val);
delay(100);
}
