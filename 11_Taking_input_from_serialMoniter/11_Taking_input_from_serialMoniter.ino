int n=5,m=1;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);

  Serial.println("Lets Start..");
  String Myname;
  Serial.println("Enter your name : ");
  while(Serial.available()==0){}
  Myname=Serial.readString();
  Serial.println("Welcome "+Myname+"!");
  
  Serial.println("Enter no of yellow blink : ");
  while(Serial.available()==0){}
  n=Serial.parseInt();//Serial.readString();for string
  
  Serial.println("Enter no of red blink : ");
  while(Serial.available()==0){}
  m=Serial.parseInt();
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("loop");
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=255;j+=5)
    {
      analogWrite(11,j);   
      delay(10);
    }
    for(int j=255;j>=0;j-=5)
    {
      analogWrite(11,j);   
      delay(10);
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<=255;j+=5)
    {
      analogWrite(10,j);   
      delay(10);
    }
    for(int j=255;j>=0;j-=5)
    {
      analogWrite(10,j);   
      delay(10);
    }
  }
}
