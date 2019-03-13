#define ldr A0
#define led 11

void setup() {
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(A0);
  Serial.println(ldrValue);
  int brightness=map(ldrValue,100,1023,255,0);
  if(brightness<50)
  {
    brightness=0;
  }
  else if(brightness>200)
  {
    brightness=255;
  }
  analogWrite(led,brightness);
  delay(100);
}
