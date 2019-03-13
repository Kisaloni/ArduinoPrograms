
#include <LiquidCrystal.h>

#define echo 10
#define trig 9
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  
  Serial.begin(9600);                 //to start serial communication
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.begin(16, 2);                   // set up the LCD's number of columns and rows:
  lcd.print("SITARAM!");  
  delay(1000);// Print a message to the LCD.
}

void loop() {
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(8);
 digitalWrite(trig,LOW);
 int duration=pulseIn(echo,HIGH);
 int dist=duration*0.034/2;
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Dist : ");
 lcd.print(dist);
 delay(100);
 
}


