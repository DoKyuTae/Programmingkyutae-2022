#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 10                                 // 최대 숫자 개수

void GenRandSeed()                                 // 무작위 숫자를 만드는 함수
{
	srand((unsigned int)(time(NULL)));
	return;
}                                                  // 무작위 숫자를 만드는 함수 종료


int main(void)
{
	int num[MAX_NUM] = { 0 };                      // 숫자를 저장하는 배열
	int i = 0;                                     // 반복하는 횟수 변수 설정
	int j = 0;                                     // 반복하는 횟수 변수 설정
	int res = 0;                                   // 오름차순 내림차순 결과 값 저장 변수

	GenRandSeed();                                 // 무작위 숫자를 만드는 함수 호출
	
	printf("Create Random Integer : ");

	for (i = 0; i < MAX_NUM; i++)                  // 무작위 숫자를 MAX_NUM 까지 만듦
	{
		num[i] = rand() * MAX_NUM / RAND_MAX;
		printf("%d ", num[i]);
	}

	for (i = 0; i < MAX_NUM - 1; i++)              // 내름차순 정렬
	{
		for (j = 0; j < MAX_NUM - 1 - i; j++)
		{
			if (num[j] < num[j + 1])               // 숫자를 비교해서 큰수를 뒤로 보냄
			{
				res = num[j];
				num[j] = num[j + 1];
				num[j + 1] = res;
			}
		}
	}
	
	printf("\n");

	printf("\ndescending order : ");               // 내림차순 출력
	
	for (i = 0; i < MAX_NUM; i++)                  // MAX_NUM 까지 저장된 배열 출력
	{
		printf("%d ", num[i]);
	}

	for (i = 0; i < MAX_NUM - 1; i++)              // 오름차순 정렬
	{
		for (j = 0; j < MAX_NUM - 1 - i; j++)
		{
			if (num[j] > num[j + 1])               // 숫자를 비교해서 작은수를 앞으로 보냄
			{
				res = num[j];
				num[j] = num[j + 1];
				num[j + 1] = res;
			}
		}
	}
	

	printf("\n");
	
	printf("\nascending order : ");                // 오름차순 출력
	
	for (i = 0; i < MAX_NUM; i++)                  // MAX_NUM 까지 저장된 배열 출력
	{
		printf("%d ", num[i]);
	}
	
	return 0;
}

