#include <stdio.h>

#define min 2                                       // 최소 소수 2를 지정
#define line 5                                      // 결과 값 출력시 줄, 열 수 지정

int main(void)

{
	int a;                                           // 입력되는 값의 변수 지정
	int i, j;                                        // 소수 수식 및, 소수 변수 지정
	int p = 0;                                       // 줄, 열 변수 지정

	printf("input an number higher than or equal to 2 : ");
	scanf_s("%d", &a);

	for (i = min; i <= a; i++)                       // 최소 소수 2는 고정 이후에 입력된 수 이하까지 i 증가
	{
		for (j = min; j <= i; j++)                   // 최소 소수 2는 고정 이후에 j가 i 이하로 증가
		{
			if (i % j == 0)                          // 소수 계산을 위한 나머지 수식
			{
				if (i > j) break;                    // i > j 이면 성립되지 않음
				
				else                                 // 위 조건이 해당되지 않는다면 결과 값 출력
				{
					printf(" %d ", i);               // 결과 값 출력
					p++;
					if (p % line == 0)               // p가 증가하면서 열, 행 수에 맞게 출력 
					printf("\n");
				}
			}
		}
	}
	
	return 0;

}