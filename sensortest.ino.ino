#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>
#include <NewPing.h>

int waarde = 0 ;
#define ECHO_PIN_237sensor 7
#define TRIGGER_PIN_237sensor 23
#define MAX_DISTANCE_237sensor 200
NewPing UV237sensor(TRIGGER_PIN_237sensor,ECHO_PIN_237sensor,MAX_DISTANCE_237sensor);

void setup()
{
  initDwenguino();
}

void loop()
{
  dwenguinoLCD.clear();
  waarde = 	UV237sensor.ping() / US_ROUNDTRIP_CM ;
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print("waarde:" );
  dwenguinoLCD.print(waarde );
  delay( 500 );
}


