#include <Servo.h> 

const int servoPin = 6;  

Servo servo;      

void setup() {            
  servo.attach(servoPin);   
  Serial.begin(9600);      
  Serial.println("ángulo en grados 10..170");
}

void loop() {  
  if (Serial.available()) {
    int angulo = Serial.parseInt();
    servo.write(angulo);     
  }
}
