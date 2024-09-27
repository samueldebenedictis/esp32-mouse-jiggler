#include <Arduino.h>
#include <BleMouse.h>

int loop_interval = 60000;
int between_interval = 200;

BleMouse bleMouse("Mouse ESP32");

void setup()
{
  bleMouse.begin();
}

void loop()
{
  bleMouse.move(+10, 0);
  delay(between_interval);
  bleMouse.move(-10, 0);
  delay(loop_interval-between_interval);
}