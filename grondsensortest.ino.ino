#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

int waarde = 0 ;

void setup()
{
  initDwenguino();
}

void loop()
{
  dwenguinoLCD.clear();
  waarde = 0 ;
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print("waarde:" );
  dwenguinoLCD.print(waarde );
  delay( 500 );
}


