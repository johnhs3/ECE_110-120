#include <L298N.h>
L298N myMotor(11,12,10);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
myMotor.setSpeed(255);
myMotor.forward();
}
