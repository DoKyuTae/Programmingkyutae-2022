// 아두이노 실습 코드 저장

int redpin = 5;
int greenpin = 4;
int bluepin = 3;
int yellowpin = 2;                                   // 핀이 어디에 연결되어 있는지  

void setup()
{

	pinMode(redpin, OUTPUT);                         // 핀 설정
	pinMode(greenpin, OUTPUT);
	pinMode(bluepin, OUTPUT);
	pinMode(yellowpin, OUTPUT);

	Serial.begin(9600);                              // 문자를 쓰기위함

}

void loop()                                          // 무한 반복
{
	digitalWrite(redpin, HIGH);                      // LED 켜짐
	Serial.print("RedLED : on\n");
	delay(1000);
	digitalWrite(redpin, LOW);                       // LED 꺼짐   
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