#include <stdio.h>

int plus(int x, int y);            // 더하기를 plus 함수로 선언
int sub(int x, int y);             // 빼기를 sub 함수로 선언
int mul(int x, int y);             // 곱하기를 mul 함수로 선언
int div(int x, int y);             // divide set 'div' function

int plus(int x, int y)             // definition plus function
{
	int temp;                      // set variable result
	
	temp = x + y;                  // saving result to temp

	return temp;                   // give back temp
}                                  // plus function end

int sub(int x, int y)              // sub 함수 정의 시작
{
	int temp;                      // 결과 값을 저장할 변수 설정

	temp = x - y;                  // 결과 값을 temp에 저장

	return temp;                   // temp의 값을 반환
}                                  // sub 함수 
int mul(int x, int y)              // mul 함수 정의 시작
{
	int temp;                      // 결과 값을 저장할 변수 설정

	temp = x * y;                  // 결과 값을 temp에 저장

	return temp;                   // temp의 값을 반환
}                                  // sub 함수 끝

int div(int x, int y)              // div 함수 정의 시작
{
	int temp;                      // 결과 값을 저장할 변수 설정

	temp = x / y;                  // 결과 값을 temp에 저장

	return temp;                   // temp의 값을 반환
}                                  // sub 함수 끝

int main(void)                   // main 함수 시작

{
	int nA = 0;                  // 정수 변수 설정
	int nB = 0;                  // 정수 변수 설정
	int result = 0;              // 수식 결과 변수 설정
	char ch;                     // 수식에 포함 되는 문자 변수 설정


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   // 1은 scan의 저장용량 설정으로 넣음


	switch (ch)
	{
	case '+':
	{
		printf("Plus : ");                               // 입력한 수식이 + 이면 덧셈으로 하고 출력
		int result = plus(nA, nB);                       // plus 함수 호출
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '-':
	{
		printf("Subtraction : ");                        // 입력한 수식이 - 이면 뺄셈으로 하고 출력
		int result = sub(nA, nB);                        // sub 함수 호출
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '*':
	{
		printf("Multiply : ");                           // 입력한 수식이 * 이면 곱셈으로 하고 출력
		int result = mul(nA, nB);                        // mul 함수 호출
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '/':
	{
		printf("Divide : ");                              // 입력한 수식이 / 이면 나눗셈으로 하고 출력
		int result = div(nA, nB);                         // div 함수 호출
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	default:                                              // 해당하지 않는다면 프로그램을 끝낸다는 뜻
	{
		break;
	}

	return 0;

	}	                                                  // main 함수 끝
}