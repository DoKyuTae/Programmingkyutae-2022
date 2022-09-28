#include <stdio.h>

int main(void)

{
	int nA = 0;                  //정수 변수 설정
	int nB = 0;                  //정수 변수 설정
	int result = 0;              //수식 결과 변수 설정
	char ch;                     //수식에 포함 되는 문자 변수 설정


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   //1은 scan의 저장용량 설정으로 넣음


	switch (ch)
	{
	    case '+':
		{
			printf("Plus : ");                               //입력한 수식이 + 이면 덧셈으로 하고 출력
			int result = nA + nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
	    case '-':
		{
			printf("Subtraction : ");                        //입력한 수식이 - 이면 뺄셈으로 하고 출력
			int result = nA - nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
	    case '*':
		{
			printf("Multiply : ");                           //입력한 수식이 * 이면 곱셈으로 하고 출력
			int result = nA * nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
		case '/':
		{
			printf("Divide : ");                              //입력한 수식이 / 이면 나눗셈으로 하고 출력
			int result = nA / nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
		default:                                              //해당하지 않는다면 프로그램을 끝낸다는 뜻
		{
			break;
		}

		return 0;

	}


}