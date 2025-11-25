// C++ code
// flex sensor & Servo motor
#include<Servo.h> 
int servo_pin=7;
Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(servo_pin);
  
}

void loop()
{
  int angle_value=angle();
  myServo.write(angle_value);
  Serial.println(angle_value);

}
int angle(){
	int sensor_value=analogRead(A1);
  int angle=map(sensor_value,710,301,0,180);
  return angle;
}