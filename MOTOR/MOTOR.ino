
#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 11, 4, 5, 6, 7);
const int pin1=3;
const int pin2=2;
int pin1state=0;
int pin2state=0;
//*******************************************************
void setup()
{
 lcd.begin(16, 2);
 pinMode(pin1,OUTPUT);
 pinMode(pin2,OUTPUT);
 pin1state=LOW;
 pin2state=LOW;
 digitalWrite(pin1,pin1state);
 digitalWrite(pin2,pin2state);
 delay(1000);

  lcd.print("Rotation of motor");  
  lcd.setCursor(0, 1);
  lcd.print("clk wise and anticlk wise");  
 delay(4000);
 
}
//**********************************************************
void loop()
{
  lcd.clear();
 pin1state=LOW;
 pin2state=HIGH;
digitalWrite(pin1,pin1state);
 digitalWrite(pin2,pin2state);
 lcd.print("anticlk wise"); // MOTOR WILL ROTATE ANTICLK WISE TILL 5 SEC
    delay(5000);
    lcd.clear();

     pin1state=HIGH;
  pin2state=LOW;
digitalWrite(pin1,pin1state);
 digitalWrite(pin2,pin2state);
 lcd.print("clk wise");// MOTOR WILL ROTATE CLK WISE TILL 5 SEC
    delay(5000);
     }
//*************************************************************



