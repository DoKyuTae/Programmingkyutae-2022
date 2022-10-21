#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MATRIX_A 3                                        // n x m 행렬 n 의 값
#define MATRIX_B 5                                        // n x m 행렬 m 의 값
#define MAX_NUM 100                                       // 무작위 정수 생성 범위


void GenRandSeed()                                        // 무작위 정수 생성 함수
{
	srand((unsigned int)(time(NULL)));
	return;
}                                                         // 무작위 정수 생성 함수 종료


int main(void)
{
	int i = 0;                                            // 행렬을 만드는데 필요한 변수
	int j = 0;
	int k = 0;
	int p = 0;
	int a[MATRIX_A][MATRIX_B] = { 0 };                    // 행렬을 만드는데 필요한 배열
	int b[MATRIX_B][MATRIX_A] = { 0 };
	

	GenRandSeed();                                        // 무작위 정수 생성 함수 호출
	
	printf("matrix A : \n");
	
	for (i = 0; i < MATRIX_A; i++)                        // 행의 개수가 MATRIX_A
	{
		
		for (j = 0; j < MATRIX_B; j++)                    // 열의 개수가 MATRIX_B
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;        // 무작위 정수가 배열에 저장
			printf("\t%d", a[i][j]);                      // 행렬 A 출력
		}
		
		printf("\n");
	
	}
	
	printf("");

	printf("matrix B : \n");

	for (p = 0; p < MATRIX_B; p++)                        // 행의 개수가 MATRIX_B
	{
		
		for (k = 0; k < MATRIX_A; k++)                    // 열의 개수가 MATRIX_A
		{
			b[p][k] = rand() * MAX_NUM / RAND_MAX;        // 무작위 정수가 배열에 저장
			printf("\t%d", b[p][k]);                      // 행렬 B 출력
		}

		printf("\n");
	
	}

	printf("");

	printf("multiplication of matrices A and B : \n");
	
	for (i = 0; i < MATRIX_A; i++)                        // 행렬 A와 B의 곱의 결과는 n(MATRIX_A) x n(MATRIX_A)
	{
		
		for (k = 0; k < MATRIX_A; k++)
		{
			
			int res = 0;                                  // 행렬 곱의 값을 저장할 변수 설정
			
			for (j = 0; j < MATRIX_B; j++)                // 행렬 A(n x m), B(m x n)에 m의 값 
			{
				res += a[i][j] * b[j][k];                 // 행렬 A와 B의 곱
			}
			
			printf("\t%d", res);                          // 행렬의 곱 출력

		}

		printf("\n");

	}

	return 0;
}