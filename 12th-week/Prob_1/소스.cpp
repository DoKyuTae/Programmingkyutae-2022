#include<Servo.h>                            // 서보모터를 쓰기위한 헤더파일

Servo servo;

int value = 0;                               // 각도 변수 설정
int redpin = 5;                              // 핀의 넘버 
int greenpin = 4;
int bluepin = 3;
int yellowpin = 2;

void setup()
{
    servo.attach(7);                         // 서보모터 핀 넘버

    pinMode(redpin, OUTPUT);
    pinMode(greenpin, OUTPUT);
    pinMode(bluepin, OUTPUT);
    pinMode(yellowpin, OUTPUT);
    Serial.begin(9600);

}

void loop()
{
    int readVlue = analogRead(A1);           // 가변저항 핀 넘버, 변수 설정


    if (Serial.available())
    {
        char input;
        input = Serial.read();

        if (input == '1')                    // 문자 1을 입력하면 30도씩 증가해서 저장
        {
            value += 30;

            if (value == 180)                // 각도가 180도면 0으로 리셋
                value = 0;
        }
        else
            value = 0;

        servo.write(value);



    }

    if (value == 30)                         // 서보모터의 각도가 30도면 빨간색, 초록색 LED 점등
    {
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

    if (value == 60)                         // 서보모터의 각도가 60도면 파란색, 노란색 LED 점등
    {
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

    if (value == 90)                         // 서보모터의 각도가 90도면 빨간색, 파란색 LED 점등
    {
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

    if (value == 120)                           // 서보모터의 각도가 30도면 초록색, 노란색 LED 점등
    {
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

    if (value == 150)                           // 서보모터의 각도가 150도면 초록색, 파란색 LED 점등
    {
    {
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