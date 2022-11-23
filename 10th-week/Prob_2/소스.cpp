// 아두이노 실습 코드 저장

int LED = 8;
int BUTTON = 2;

void setup()
{
    pinMode(BUTTON, INPUT);
    pinMode(LED, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    if (digitalRead(BUTTON) == HIGH)
    {
        Serial.print("Switch ON\n");
        digitalWrite(LED, HIGH);
    }

    else
    {
        Serial.print("\n");
        digitalWrite(LED, LOW);
    }

}