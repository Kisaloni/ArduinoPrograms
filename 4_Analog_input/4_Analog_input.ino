#define mic A0
void setup() {
  // put your setup code here, to run once:
pinMode(mic,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val=analogRead(mic);
float voltage=(5./1023.)*val;
Serial.println("Sensor reading :"+val);
Serial.println("Voltage : "+voltage);
delay(100);
}
