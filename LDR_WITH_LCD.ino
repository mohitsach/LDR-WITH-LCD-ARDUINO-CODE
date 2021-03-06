#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int ledPin = 13;
const int ldrPin = A0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1);;
  pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {

digitalWrite(ledPin, LOW);
lcd.print("Its bright      ");
  lcd.display();
  delay(500);
   lcd.noDisplay();
  delay(500);
Serial.print("Its bright, Turn on the LED : ");
Serial.println(ldrStatus);

} 
else {

digitalWrite(ledPin, HIGH);
lcd.print("Its dark        ");
  lcd.display();
  delay(500);
   lcd.noDisplay();
  delay(500);
Serial.print("It dark, Turn off the LED : ");

Serial.println(ldrStatus);

}

}
