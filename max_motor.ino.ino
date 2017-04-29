#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>
#include <DwenguinoMotor.h>

DCMotor dcMotor1(MOTOR_1_0, MOTOR_1_1);
DCMotor dcMotor2(MOTOR_2_0, MOTOR_2_1);

void setup()
{
  initDwenguino();
}

void loop()
{
  dcMotor1.setSpeed(255);
  dcMotor2.setSpeed(255);
}


