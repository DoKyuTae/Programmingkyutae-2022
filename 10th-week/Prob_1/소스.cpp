// �Ƶ��̳� �ǽ� �ڵ� ����

int redpin = 5;
int greenpin = 4;
int bluepin = 3;
int yellowpin = 2;                                   // ���� ��� ����Ǿ� �ִ���  

void setup()
{

	pinMode(redpin, OUTPUT);                         // �� ����
	pinMode(greenpin, OUTPUT);
	pinMode(bluepin, OUTPUT);
	pinMode(yellowpin, OUTPUT);

	Serial.begin(9600);                              // ���ڸ� ��������

}

void loop()                                          // ���� �ݺ�
{
	digitalWrite(redpin, HIGH);                      // LED ����
	Serial.print("RedLED : on\n");
	delay(1000);
	digitalWrite(redpin, LOW);                       // LED ����   
	Serial.print("RedLED : off\n");
	delay(1000); // Wait for 1000 millisecond(s)

	digitalWrite(greenpin, HIGH);
	Serial.print("GreenLED : on\n");
	delay(1000);
	digitalWrite(greenpin, LOW);
	Serial.print("GreenLED : off\n");
	delay(1000); // Wait for 1000 millisecond(s)

	digitalWrite(bluepin, HIGH);
	Serial.print("BlueLED : on\n");
	delay(1000);
	digitalWrite(bluepin, LOW);
	Serial.print("BlueLED : off\n");
	delay(1000); // Wait for 1000 millisecond(s)

	digitalWrite(yellowpin, HIGH);
	Serial.print("YellowLED : on\n");
	delay(1000);
	digitalWrite(yellowpin, LOW);
	Serial.print("YellowLED : off\n");
	delay(1000); // Wait for 1000 millisecond(s)

}