#include <stdio.h>

void input_data(int *pa, int *pb);                         // 숫자를 입력할 함수 설정
void swap_data(void);                                      // 숫자를 서로 바꾸는 함수 설정
void print_data(int a, int b);                             // 바뀐 숫자를 출력하는 함수 설정

int a, b;                                                  // 변수 설정   

int main(void)                                             // main 함수 시작
{
	input_data(&a, &b);                                    // 숫자를 입력할 함수 호출
	swap_data();                                           // 숫자를 서로 바꾸는 함수 호출
	print_data(a, b);                                      // 바뀐 숫자를 출력하는 함수 호출

	return 0;

}                                                          // main 함수 종료

void input_data(int *pa, int *pb)                          // 숫자를 입력할 함수 정의
{
	printf("input two numbers : ");
	scanf_s("%d %d", pa, pb);                              // 숫자 입력
}

void swap_data(void)                                       // 숫자를 서로 바꾸는 함수 정의
{
	int res;                                               // 숫자 순서를 바꾸기 위한 변수 설정
	
	res = a;
	a = b;
	b = res;
}

void print_data(int a, int b)                              // 바뀐 숫자를 출력하는 함수 정의
{
	printf("output two numbers : %d %d", a, b);
}