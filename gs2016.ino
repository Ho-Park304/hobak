#include <Servo.h>

Servo myservo; 

int semsorPin = A0;
int val = 0;    

void setup() {
  myservo.attach(9);
  Serial.begin(9600);  
}

void loop() {
    val = analogRead(semsorPin);
    Serial.println(val);          


    if(val > 700) {
      myservo.write(0);
      delay(1000);
      } else if(val >300) {
        myservo.write(90);
        delay(100);
      } else {
        myservo.write(180);
        delay(100);
  }

}
