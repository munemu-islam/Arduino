// C++ code
// odd numbers betwwen 1-100

void setup()
{
  Serial.begin(9600);
  for(int i=1;i<=100;i=i+2){
    Serial.println(i);
  }
  
}

void loop(){
 
}