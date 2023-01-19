#include <Adafruit_SSD1306.h>
#include <splash.h>

#include<Adafruit_SSD1306.h>
#define RESET LED_BUILTIN
Adafruit_SSD1306 oled(RESET);
void setup()
{
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.setTextSize(0.6);
  oled.setTextColor(WHITE);
  oled.display();
  delay(1000);
  oled.clearDisplay();
}
void loop()
{
  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print("Amit");
  oled.setCursor(15, 10);
  oled.print("Barman");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setCursor(6, 0);
  oled.print("I love you");
  oled.setCursor(20, 10);
  oled.print("100%");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print("iiests");
  oled.setCursor(10, 20);
  oled.print("bye");
  oled.display();
  delay(1000); 
}
