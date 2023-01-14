#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);
void setup(){
  lcd.begin(16,2);
  
}
void loop(){
  lcd.print("Octus defence");
  delay(9000);
  lcd.setCursor(2,1);
  lcd.print("AMIT BARMAN");
  delay(8000);

  lcd.clear();
  lcd.blink();
  delay(5000);

  lcd.setCursor(4,3);
  delay(3000);
  lcd.cursor();
  delay(2000);

  lcd.clear();
}
