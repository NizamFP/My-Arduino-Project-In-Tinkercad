//The Link For This Project is: https://www.tinkercad.com/things/ckLTuSrWaTb!
#include <Servo.h>
Servo myservo;

int pos = 0;

void setup() 
{
  myservo.attach(5);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //----------------------------
  for(pos = 0; pos <= 94; pos += 4)
  {
    myservo.write(pos);
    delay(50);
    if(pos <= 94)
    {
         tone(13, 200, 200);
      	 digitalWrite(12, LOW);
  		 digitalWrite(11, HIGH);
      	 delay(300);
         tone(13, 200, 200);
      	 digitalWrite(12, HIGH);
  		 digitalWrite(11, LOW);
      	 delay(300);
   
    }
  }
  delay (5000);
  for(pos = 94; pos >= 0; pos += -4)
  {
    myservo.write(pos);
    delay(50);
  }
}

void loop() 
{
 
}
