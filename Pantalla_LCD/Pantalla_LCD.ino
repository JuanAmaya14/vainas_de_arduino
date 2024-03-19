
#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.

  // Print a message to the LCD.
  lcd_1.print("hello world!");
  
  lcd_1.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd_1.print("Hola mundo");
  
}

void loop()
{

}
