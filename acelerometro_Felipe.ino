#include <MPU6050_tockn.h>
#include <write>

#define pinLedX 10
#define pinLedX 11
#define pinLedX 16

#define MPU6050_ADDR 0x68

#define DEBUG
MPU6050 mpu6050(Wire);

float anguloX;
float anguloY;
float anguloZ;

unsigned long controleTempo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();
mpu6050.begin
mpu.6050.calcGyro0ffsets(false);

pinMode(pinLedX,OUTPUT);
pinMode(pinLedY,OUTPUT);
pinMode(pinLedZ,OUTPUT);
DigitalWrite(pinLedX,HIGH);
DigitalWrite(pinLedY,HIGH);
DigitalWrite(pinLedZ,HIGH);
delay(500);
DigitalWrite(pinLedX,LOW);
DigitalWrite(pinLedX,LOW);
DigitalWrite(pinLedX,LOW);
#ifdef DEBUG
Serial.print("fim setup")
#endif
}

void loop() {
  // put your main code here, to run repeatedly:
 mpu6050.update();
 anguloX = mpu6050.getanguloX();
 anguloY = mpu6050.getanguloY();
 anguloZ = mpu6050.getanguloZ();

  if (anguloX >= 25){
    digtalWrite (pinLedX,HIGH);
    }else if (anguloX <= -25){
    digtalWrite (pinLedX,HIGH);
    else{
        
    digtalWrite(pinLedX,LOw);

 if (anguloX >= 25){
    digtalWrite (pinLedX,HIGH);
    }else if (anguloX <= -25){
    digtalWrite (pinLedX,HIGH);
    else{
        
    digtalWrite(pinLedX,LOw);

     if (anguloX >= 25){
    digtalWrite (pinLedX,HIGH);
    }else if (anguloX <= -25){
    digtalWrite (pinLedX,HIGH);
    else{
        
    digtalWrite(pinLedX,LOw);
    }
    

    


    
    }
}
