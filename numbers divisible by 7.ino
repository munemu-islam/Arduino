// C++ code
// numbers divisible by 7 between 100-500

void setup()
{	int count=0;
  Serial.begin(9600);
  for(int i=100;i<=500;i++){
    if (i%7==0){
    	Serial.println(i);
      count++;
    }
  }
  Serial.println(count);      
}

void loop(){
 
}