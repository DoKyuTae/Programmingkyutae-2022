#include <stdio.h>
#include <stdlib.h>

#define NUM_ZERO 0                                           // 초기화 숫자
#define NUM_FIR 1                                            // 연산에 필요한 숫자
#define NUM_SEC 2
#define NUM_STR 5                                            // 한 줄에 5개씩 출력

int main(void)
{
	int *pi;                                                 // 포인터 설정, 변수 설정
	int num;
	int i, j = NUM_ZERO;

	printf("input a positive number : ");
	scanf_s("%d", &num);

	pi = (int*)malloc((num - NUM_FIR) * sizeof(int));        // 저장공간 할당
	
	for (i = NUM_ZERO; i < num - NUM_FIR; i++)
	{
		pi[i] = i + NUM_SEC;
	}
	
	i = NUM_ZERO;

	while (NUM_FIR)                                          // 입력한 숫자 범위 안에서 소수를 찾는 과정
	{
		while ((pi[i] == NUM_ZERO) && (i < num - NUM_SEC))
		{
			i++;
		}

		if (i == num - NUM_SEC) break;
		
			for (j = i + NUM_FIR; j < num - NUM_FIR; j++)
			{
				if (pi[j] % pi[i] == NUM_ZERO)
				{
					pi[j] = NUM_ZERO;
				}
			}

			i++;
	}
	
	for (i = NUM_ZERO; i < num - NUM_SEC; i++)               // 소수를 한줄에 5개씩 출력하고 소수가 아니면 X를 출력
	{
		if (pi[i] != NUM_ZERO)
		{
			printf("%5d", pi[i]);
		}
		
		else
		{
			printf("%5c", 'X');
		}

		if ((i + NUM_FIR) % NUM_STR == NUM_ZERO)
		{
			printf("\n");
		}
	}
	
	free(pi);

	return 0;
}