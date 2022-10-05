#include <stdio.h>

int rec_func(int n);                   // 1부터 n까지의 합을 반환하는 함수

int main(void)                         // main 함수 시작

{
	int a = 0;                         // 총합을 나타내는 변수 지정
	int res = 0;                       // 입력하는 숫자를 받을 변수 지정
	
	printf("input number : ");
	scanf_s("%d", &res);
	
	a = rec_func(res);                 // a의 값을 설정, 입력된 숫자가 rec_func 함수에 대입
	printf("result : %d", a);          // 계산된 값 출력

	return 0;
}                                      // main 함수 끝

int rec_func(int n)                    // rec_func 함수 시작
{
	if (n == 0) return n;              // n 이 0 이면 종료
	
	n = n + rec_func(n-1);             // n의 값은 입력된 값 이하로 더하는 수식
	
	return n;
}                                      // rec_func 함수 끝