#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();
int JoyStick_X = PA0; //x
int JoyStick_Y = PA1; //y
void setup() {
  mySwitch.enableTransmit(PA10);
}

void loop() {
  int x, y;
  x = analogRead(JoyStick_X) / 8;
  y = analogRead(JoyStick_Y) / 8;
  mySwitch.send((999000 + x), 24);
  mySwitch.send((888000 + y), 24);
}
