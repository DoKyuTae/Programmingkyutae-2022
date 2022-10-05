#include <stdio.h>

int main(void)

{
	int a = 0;                                       // 구구단 단수를 받는 변수 지정
	int j;                                           // 출력문을 반복을 위한 변수 지정

	printf("input your number : ");
	scanf_s("%d", &a);                               // 구구단을 몇단으로 할 것인지 입력(정수)

	for (j = 1; j <= 9; j++)                         // j가 1부터 9까지 증가하면서 출력문을 9번 반복
	{
		printf("%d * %d = %d\n", a, j, a * j);       // 입력한 값과 변수 j를 이용한 구구단을 만들어 출력
	}
	
	return 0;                                        

}