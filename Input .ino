// C++ code
// Take an input
void setup()
{
  Serial.begin(9600);

  
}

void loop()
{
 int x= Serial.parseInt();
  Serial.println(x);
  
  delay(1000);
  float y= Serial.parseFloat();
  Serial.println(y);
  
  delay(1000);
  char z= Serial.read();
  Serial.println(z);
  
  delay(3000);
  String a= Serial.readString();
  Serial.println(a);
}