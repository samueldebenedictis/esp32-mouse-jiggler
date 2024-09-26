#include <Arduino.h>
#include <BleMouse.h>

BleMouse bleMouse("Mouse ESP32");

int loop_interval = 60000;

void setup()
{
  bleMouse.begin();
}

void loop()
{
  bleMouse.move(+10, 0);
  delay(loop_interval/2);
  bleMouse.move(-10, 0);
  delay(loop_interval/2);
}