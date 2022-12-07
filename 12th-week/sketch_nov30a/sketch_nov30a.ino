#include<Servo.h>

Servo servo;

int value = 0;
int redpin=5;
int greenpin=4;
int bluepin=3;
int yellowpin=2;

void setup()
{ 
  servo.attach(7);
  
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int readVlue = analogRead(A1);
 
  
  if(Serial.available())
  {
    char input;
    input = Serial.read();
    
    if(input == '1')
    {
      value += 30;
      
      if(value == 180)
        value = 0;
    } 
      else
        value = 0;
    
    servo.write(value);
  }

  if(value == 30)
  {
    Serial.print("Servo Angle : 30\n");
    digitalWrite(redpin, HIGH);
    Serial.print("RedLED : on\n");
    delay(readVlue);
    digitalWrite(redpin, LOW);
    Serial.print("RedLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  
    digitalWrite(greenpin, HIGH);
    Serial.print("GreenLED : on\n");
    delay(readVlue);
    digitalWrite(greenpin, LOW);
    Serial.print("GreenLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  }
    
  if(value == 60)
  {
    Serial.print("Servo Angle : 60\n");
    digitalWrite(bluepin, HIGH);
    Serial.print("BlueLED : on\n");
    delay(readVlue);
    digitalWrite(bluepin, LOW);
    Serial.print("BlueLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  
    digitalWrite(yellowpin, HIGH);
    Serial.print("YellowLED : on\n");
    delay(readVlue);
    digitalWrite(yellowpin, LOW);
    Serial.print("YellowLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  
  } 
  
  if(value == 90)
  {
    Serial.print("Servo Angle : 90\n");
    digitalWrite(redpin, HIGH);
    Serial.print("RedLED : on\n");
    delay(readVlue);
    digitalWrite(redpin, LOW);
    Serial.print("RedLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
    
    digitalWrite(bluepin, HIGH);
    Serial.print("BlueLED : on\n");
    delay(readVlue);
    digitalWrite(bluepin, LOW);
    Serial.print("BlueLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  
  }
  
  if(value == 120)
  {
    Serial.print("Servo Angle : 120\n");
    digitalWrite(greenpin, HIGH);
    Serial.print("GreenLED : on\n");
    delay(readVlue);
    digitalWrite(greenpin, LOW);
    Serial.print("GreenLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
    
    digitalWrite(yellowpin, HIGH);
    Serial.print("YellowLED : on\n");
    delay(readVlue);
    digitalWrite(yellowpin, LOW);
    Serial.print("YellowLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
  }
 
   if(value == 150)
   {
    Serial.print("Servo Angle : 150\n");
    digitalWrite(greenpin, HIGH);
    Serial.print("GreenLED : on\n");
    delay(readVlue);
    digitalWrite(greenpin, LOW);
    Serial.print("GreenLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
    
    digitalWrite(bluepin, HIGH);
    Serial.print("BlueLED : on\n");
    delay(readVlue);
    digitalWrite(bluepin, LOW);
    Serial.print("BlueLED : off\n");
    delay(readVlue); // Wait for 1000 millisecond(s)
   }
}
