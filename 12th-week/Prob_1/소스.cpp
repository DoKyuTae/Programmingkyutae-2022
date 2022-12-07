#include<Servo.h>                            // �������͸� �������� �������

Servo servo;

int value = 0;                               // ���� ���� ����
int redpin = 5;                              // ���� �ѹ� 
int greenpin = 4;
int bluepin = 3;
int yellowpin = 2;

void setup()
{
    servo.attach(7);                         // �������� �� �ѹ�

    pinMode(redpin, OUTPUT);
    pinMode(greenpin, OUTPUT);
    pinMode(bluepin, OUTPUT);
    pinMode(yellowpin, OUTPUT);
    Serial.begin(9600);

}

void loop()
{
    int readVlue = analogRead(A1);           // �������� �� �ѹ�, ���� ����


    if (Serial.available())
    {
        char input;
        input = Serial.read();

        if (input == '1')                    // ���� 1�� �Է��ϸ� 30���� �����ؼ� ����
        {
            value += 30;

            if (value == 180)                // ������ 180���� 0���� ����
                value = 0;
        }
        else
            value = 0;

        servo.write(value);



    }

    if (value == 30)                         // ���������� ������ 30���� ������, �ʷϻ� LED ����
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

    if (value == 60)                         // ���������� ������ 60���� �Ķ���, ����� LED ����
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

    if (value == 90)                         // ���������� ������ 90���� ������, �Ķ��� LED ����
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

    if (value == 120)                           // ���������� ������ 30���� �ʷϻ�, ����� LED ����
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

    if (value == 150)                           // ���������� ������ 150���� �ʷϻ�, �Ķ��� LED ����
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