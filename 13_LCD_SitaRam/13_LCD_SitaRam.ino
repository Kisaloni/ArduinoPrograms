/*
 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
   * ends to +5V and ground
*/

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 =5;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  lcd.begin(16, 2);                   // set up the LCD's number of columns and rows:
  lcd.print("SITARAM!");              // Print a message to the LCD.
}

void loop() {
 
}


