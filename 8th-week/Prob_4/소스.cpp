#include <stdio.h>

#define SET_NUM1 10                                        // 식에 필요한 숫자 설정
#define SET_NUM2 20
#define SET_INITI 0

void add_by_pointer(int *pa, int *pb, int *pr)             // a와 b를 포인터를 이용하여 계산하는 함수 정의
{
	*pr = *pa + *pb;
}

int main(void)                                             // main 함수 시작
{
	int a = SET_NUM1;                                      // 변수 설정
	int b = SET_NUM2;
	int res = SET_INITI;

	add_by_pointer(&a, &b, &res);                          // a와 b를 포인터를 이용하여 계산하는 함수 호출
	
	printf("%d", res);                                     // 결과 값 출력

	return 0;

}