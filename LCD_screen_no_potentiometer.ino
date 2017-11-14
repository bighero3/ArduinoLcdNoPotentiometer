//Arduino to RG1602A
//6 to Vo
//2 to D7
//3 to D6
//4 to D5
//5 to D4
//5V to VDD
//GND to Rw
//9 to A 
//11 to E
//12 to Rs
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  analogWrite(6,100);//Change the second value for contrast
  
  lcd.begin(16,2);
 
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Foo.bar1");
  lcd.setCursor(0,1);
  lcd.print("Foo.bar2");
}
