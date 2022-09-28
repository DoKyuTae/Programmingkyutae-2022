#include <stdio.h>

int main(void)

{
	int nA = 0;                  //정수 변수 설정
	int nB = 0;                  //정수 변수 설정
	int result = 0;              //수식 결과 변수 설정
	char ch;                     //수식에 포함 되는 문자 변수 설정


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   //1은 scan의 저장용량 설정으로 넣음


	if (ch == '+')
	{
		printf("Plus : ");                               //입력한 수식이 + 이면 덧셈으로 하고 출력
		int result = nA + nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '-')
	{
		printf("Subtraction : ");                        //입력한 수식이 - 이면 뺄셈으로 하고 출력
		int result = nA - nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '*')
	{
		printf("Multiply : ");                           //입력한 수식이 * 이면 곱셈으로 하고 출력
		int result = nA * nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '/')
	{
		printf("Divide : ");                              //입력한 수식이 / 이면 나눗셈으로 하고 출력
		int result = nA / nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else
	{
		return 0;                                         //조건에 만족하는 것이 없으면 프로그램 종료
	}


}