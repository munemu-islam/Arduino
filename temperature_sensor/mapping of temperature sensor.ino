// C++ code
// mapping of temparature sensor
int temperature_pin=A2;
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 int temperature=temp();
  Serial.println(temperature);

}
int temp()
{
  int t=analogRead(temperature_pin);
 return map(t,20,358,-40,125);
}
  