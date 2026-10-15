#include<Servo.h>

Servo myservo;

// pins 
const int servopin = 6;
const int trigpin = 9;
const int echopin = 10;
const int ledpin = 8;
const int buzzerpin = 2;

// direction range 

const int detectionrange = 15;

// servo movement 
int angle = 0;
int direction = 1;

// measure the distance 

float getDistance(){

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  
  long duration = pulseIn(echopin, HIGH, 25000);
  if ( duration == 0){
    return -1;
  }
return duration * 0.0343 / 2;


}

void setup(){

  Serial.begin(9600);
  
  myservo.attach(servopin);

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);

  myservo.write(0);
  delay(500);

}

void loop(){

 myservo.write(angle);
 delay(25);

 float distance = getDistance();

 Serial.print("Angle : ");
 Serial.print(angle);
 Serial.print(" degree | Distance : ");
 if (distance < 0){
  Serial.println("no echo");

 }else{
  Serial.print(distance);
  Serial.println("cm");

 }

if ( distance > 0 && distance <= detectionrange  ){
  digitalWrite(ledpin, HIGH);
  digitalWrite(buzzerpin, HIGH);
}else{
  digitalWrite(ledpin, LOW);
  digitalWrite(buzzerpin, LOW);
}

 // sweep from 0 to 180 
 angle += direction;
 if(angle >=180){
  angle = 180;
  direction = -1;
 }
if ( angle <= 0){
  angle = 0;
  direction = 1;
}

}
