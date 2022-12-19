#define ZRRO 0
// 초기화 숫자 

#define YELLOW_PIN 2
#define BLUE_PIN 3
#define GREEN_PIN 4
#define RED_PIN 5
#define VIB_PIN 6
#define SW_PIN 7
// 핀 넘버(아두이노에 꽂은 위치)

#define PIN_NUM 7
// 배열에 들어갈 핀 갯수

#define SERIAL_NUM 9600
#define SERIAL_TERM 500
// 시리얼 간격

#define VOLTAGE_NUM_1 5000.0
#define VOLTAGE_NUM_2 1024.0
#define TEMP_NUM_1 500
#define TEMP_NUM_2 10.0
// 전압과 온도 계산에 필요한 숫자

#define TEMP_HIGH 90
#define TEMP_MIDDLE 80
#define TEMP_LOW 60
#define TEMP_USUAL 40
// 기준이 되는 온도

int pushswpin = SW_PIN;
// 스위치핀 변수 설정

int pin_num[PIN_NUM] = {ZRRO, ZRRO, YELLOW_PIN, BLUE_PIN, GREEN_PIN, RED_PIN, VIB_PIN};
// 핀넘버를 저장할 배열 설정

int i = ZRRO;
// 변수 초기화

void Red();
void Green();
void Blue();
void Yellow();
void Vibration();
// ON/OFF 해야하는 장치들의 함수 선언

struct function
{
  int readsw;
  int readtemp;
  int readdelay;
};
// 변수를 구조체에 저장(반복적으로 사용할 변수)

void setup()
{ 
  for(i = ZRRO; i < PIN_NUM; i++)
  {
    pinMode(pin_num[i], OUTPUT);
  }
  
  pinMode(pushswpin, INPUT);
  Serial.begin(SERIAL_NUM);
  
}
// 핀의 숫자를 배열로 배정

void loop()
{
  struct function main;

  main.readsw = digitalRead(pushswpin);
  main.readtemp = analogRead(A0);
  main.readdelay = analogRead(A1);
// main 함수에 들어갈 변수의 구조체 호출, 선언  
  
  float voltage = main.readtemp * VOLTAGE_NUM_1 / VOLTAGE_NUM_2;
  float temp = (voltage - TEMP_NUM_1) / TEMP_NUM_2;
// 전압, 온도 계산
  
    if(main.readsw == HIGH)
  {
    Serial.print("Switch : on\n");
// 스위치 ON 시, 출력되는 멘트      
    
      if(temp <= TEMP_USUAL)
      {
        
        Blue();
// 파란색 LED ON/OFF 함수 호출
        
        Green();
// 초록색 LED ON/OFF 함수 호출
        
      }
// 온도가 40도 이하면 파란색, 초록색 LED ON/OFF
      
      else if(temp <= TEMP_LOW)
      {
       Blue();
// 파란색 LED ON/OFF 함수 호출
      
      }
// 온도가 40도 초과 60도 이하면 파란색 LED ON/OFF
      
      else if(temp <= TEMP_MIDDLE)
      {    
        Green();
// 초록색 LED ON/OFF 함수 호출
        
      }
// 온도가 60도 초과 80도 이하면 초록색 LED ON/OFF
      
      else if(temp <= TEMP_HIGH)
      {
       Yellow();
// 노란색 LED ON/OFF 함수 호출        
      
      }
// 온도가 80도 초과 90도 이하면 노란색 LED ON/OFF      
      
      else
      {
      Red();
// 빨간색 LED ON/OFF 함수 호출        
      
        Vibration();
// 진동 모터 ON/OFF 함수 호출        
      
      }
// 온도가 90도 초과이면 빨간색 LED, 진동모터 ON/OFF       
      
  }
  
  else
  {
    
    Serial.print("Switch : off\n");
    
    digitalWrite(pin_num[YELLOW_PIN], LOW);
    digitalWrite(pin_num[BLUE_PIN], LOW);
    digitalWrite(pin_num[GREEN_PIN], LOW);
    digitalWrite(pin_num[RED_PIN], LOW);
    
  }
// 스위지 OFF  
    
}

void Red()
{
  
  struct function red;
  
  red.readtemp = analogRead(A0);
  red.readdelay = analogRead(A1);
// LED ON/OFF 함수에 들어갈 변수의 구조체 호출, 선언
  
  float voltage = red.readtemp * VOLTAGE_NUM_1 / VOLTAGE_NUM_2;
  float temp = (voltage - TEMP_NUM_1) / TEMP_NUM_2;
// 전압, 온도 계산
  
  Serial.print("temperature : ");
  Serial.println(temp);
  digitalWrite(pin_num[RED_PIN], HIGH);
  Serial.print("RedLED : on\n");
  delay(red.readdelay);
  digitalWrite(pin_num[RED_PIN], LOW);
  Serial.print("RedLED : off\n");
  delay(red.readdelay);
  
}
// 빨간색 LED ON/OFF 함수 설정

void Green()
{   
  
  struct function green;
  
  green.readtemp = analogRead(A0);
  green.readdelay = analogRead(A1);
// LED ON/OFF 함수에 들어갈 변수의 구조체 호출, 선언
  
  float voltage =  green.readtemp * VOLTAGE_NUM_1 / VOLTAGE_NUM_2;
  float temp = (voltage - TEMP_NUM_1) / TEMP_NUM_2;
// 전압, 온도 계산
  
  Serial.print("temperature : ");
  Serial.println(temp);
  digitalWrite(pin_num[GREEN_PIN], HIGH);
  Serial.print("GreenLED : on\n");
  delay(green.readdelay);
  digitalWrite(pin_num[GREEN_PIN], LOW);
  Serial.print("GreenLED : off\n");
  delay(green.readdelay);

}
// 초록색 LED ON/OFF 함수 설정

void Blue()
{   
  
  struct function blue;
  
  blue.readtemp = analogRead(A0);
  blue.readdelay = analogRead(A1);
// LED ON/OFF 함수에 들어갈 변수의 구조체 호출, 선언
  
  float voltage = blue.readtemp * VOLTAGE_NUM_1 / VOLTAGE_NUM_2;
  float temp = (voltage - TEMP_NUM_1) / TEMP_NUM_2;
// 전압, 온도 계산
  
  Serial.print("temperature : ");
  Serial.println(temp);
  digitalWrite(pin_num[BLUE_PIN], HIGH);
  Serial.print("BlueLED : on\n");
  delay( blue.readdelay);
  digitalWrite(pin_num[BLUE_PIN], LOW);
  Serial.print("BlueLED : off\n");
  delay( blue.readdelay);
  
}
// 파란색 LED ON/OFF 함수 설정

void Yellow()
{   
  
  struct function yellow;
  
  yellow.readtemp = analogRead(A0);
  yellow.readdelay = analogRead(A1);
// LED ON/OFF 함수에 들어갈 변수의 구조체 호출, 선언
  
  float voltage = yellow.readtemp * VOLTAGE_NUM_1 / VOLTAGE_NUM_2;
  float temp = (voltage - TEMP_NUM_1) / TEMP_NUM_2;
// 전압, 온도 계산
  
   Serial.print("temperature : ");
   Serial.println(temp);
   digitalWrite(pin_num[YELLOW_PIN], HIGH);
   Serial.print("YellowLED : on\n");
   delay(yellow.readdelay);
   digitalWrite(pin_num[YELLOW_PIN], LOW);
   Serial.print("YellowLED : off\n");
   delay(yellow.readdelay);
  
}
// 노란색 LED ON/OFF 함수 설정

void Vibration()
{
  digitalWrite(pin_num[VIB_PIN], HIGH);
  Serial.print("warning : temperature too high!!!\n");
  delay(SERIAL_TERM);
  digitalWrite(pin_num[VIB_PIN], LOW);
  delay(SERIAL_TERM);
}
// 진동 모터 ON/OFF 함수 설정
