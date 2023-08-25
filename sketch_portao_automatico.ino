#include <Server.h>
Servo servo;
int  SERVO = 9;
const int Verd = 12;
const int Verm = 11;
const int Sensor = 8;
int leitura = A5;

void setup(){
  Serial.begin(9600);
  servo.attach(SERVO);
  pinMode(Sensor, Input);
  pinMode(Verd, OUTPUT);
  pinMode(Verm, OUTPUT);
}

void loop(){
  if(digitalRead(sensor) == LOW) {
    digitalWrite(Verd, HIGH);
    digitalWrite(Verm, Low);
    servo.write(0);
    delay(3000);
  }

  else{
    digitalWrite(Verd, LOW);
    digitalWrite(Verm, HIGH);
    servo.write(90);
    delay(1000);
  }

  Serial.println(analogRead(leitura));
}