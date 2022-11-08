#include <stdio.h>
#include <stdlib.h>


#define MAX_NUM 10                                                                    // 배열의 최대크기
#define NUM_INITI 0                                                                   // 각 변수 초기화 숫자
#define NUM_FIRST 1                                                                   // 배열 표현에 필요한 숫자
#define NUM_SECOND 2
#define NUM_LINE 3                                                                    // 행렬 표현에 필요한 숫자
#define NUM_RANK 4


void main(void)
{
	int m, n;                                                                         // 행렬을 만드는데 필요한 변수 설정
	int equation[MAX_NUM][MAX_NUM];                                                   // 행렬을 저장하는 배열 설정

	
	for(m = NUM_INITI; m < NUM_LINE; m++)                                             // 방정식이 어떤식으로 나타나는지 표현
	{
		printf("[%i][0]x + [%i][1]y + [%i][2]z = [%i][3]\n\n", m, m, m, m);
	}
	
	printf("Enter the equation.... \n\n");

	for (m = NUM_INITI; m < NUM_LINE; m++)                                            // 방정식에 들어갈 숫자 입력
	{
		
		for (n = NUM_INITI; n < NUM_RANK; n++)
		{
			printf("[%i][%i] : ", m, n);
			scanf_s("%i", &equation[m][n]);
		}
		
		printf("\n");

	}

	printf("Your system of equations\n\n");

	for (m = NUM_INITI; m < NUM_LINE; m++)                                            // 입력한 방정식 출력
	{
		printf(" %ix + %iy + %iz = %i\n", equation[m][NUM_INITI], equation[m][NUM_FIRST], equation[m][NUM_SECOND], equation[m][NUM_LINE]);
	}

	double mres1 = NUM_INITI;                                                         // 방정식 해에서 분모에 들어갈 변수 설정
	double mres2 = NUM_INITI;
	double mres = NUM_INITI;

	
	mres1 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_INITI] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_FIRST];
	
	mres2 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_FIRST] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_INITI];
	
	// 크래머 공식을 이용하여 방정식 해에서 분모부분 표현
	
	mres = (double)mres1 - (double)mres2;                                             // 방정식 해에서 분모부분 표현
	
	
	double res1 = NUM_INITI;                                                          // 방정식 해에서 x값에대한 변수 설정
	double res2 = NUM_INITI;                                                          // 방정식 해에서 y값에대한 변수 설정
	double res3 = NUM_INITI;                                                          // 방정식 해에서 z값에대한 변수 설정
	

	res1 = (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_SECOND] +
		   (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_LINE] +
		   (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_FIRST]
		- ( (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_FIRST] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_LINE] );

	// 크래머 공식을 이용하여 방정식 해에서 x값 구하는 과정


	res2 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_SECOND] +
		   (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_INITI] +
		   (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_LINE]
		- ( (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_LINE] +
			(double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_SECOND] +
			(double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_INITI] );

	// 크래머 공식을 이용하여 방정식 해에서 y값 구하는 과정


	res3 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_LINE] +
		   (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_INITI] +
		   (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_FIRST]
		- ( (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_FIRST] +
			(double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_LINE] +
			(double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_INITI] );

	// 크래머 공식을 이용하여 방정식 해에서 z값 구하는 과정
	
	
	double xres = NUM_INITI;                                                          // 최종적으로 x값에 대한 변수 설정
	double yres = NUM_INITI;                                                          // 최종적으로 y값에 대한 변수 설정
	double zres = NUM_INITI;                                                          // 최종적으로 z값에 대한 변수 설정
	
	
	xres = (double)res1 / (double)mres;                                               // 최종적인 x값   
	yres = (double)res2 / (double)mres;                                               // 최종적인 y값
	zres = (double)res3 / (double)mres;                                               // 최종적인 z값


	printf("\nSolution of equations\n");
	printf("\n x = %.2f", xres);                                                      // 방정식 해 출력
	printf("\n y = %.2f", yres);
	printf("\n z = %.2f", zres);

	return;

}