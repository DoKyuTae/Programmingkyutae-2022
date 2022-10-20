#include <stdio.h>
#include <stdlib.h>      
#include <math.h>                              // 계산 식 루트를 이용하기 위함 (sqrt)

#define MAX_COUNT 5                            // 숫자를 최대 5개 받는다는 변수

unsigned int GenRandNum(unsigned int nRange)   // 무작위 숫자를 만드는 함수
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}                                              // 무작위 숫자 생성 함수 종료


int main(void)
{
	int nRange = 0;
	int i = 0;                                 // 멘트 출력에 필요한 변수설정
	int j = 0;                                 // 평균값 구하는 변수
	int p = 0;                                 // 분산값 구하는 변수
	int k = 0;                                 // 표준편차값 구하는 변수
	int nRes = 0;                              // 무작위 숫자를 받는 변수
	int num[MAX_COUNT] = { 0 };                // 숫자를 저장하는 배열
	
	for (i = 0; i < MAX_COUNT; i++)
	{
		printf("input number, for generating the random number related to your input : ");
		scanf_s("%d", &nRange);
		int nRes = GenRandNum(nRange);         // 무작위 숫자 함수 호출
		printf("random number : %d\n", nRes);
		num[i] += nRes;                        // 무작위 숫자를 배열에 저장
	}

	double sum = 0;                            // 숫자의 합을 받는 변수
	double avg = 0;                            // 평균값을 받는 변수
	double var = 0;                            // 분산값을 받는 변수
	double sta = 0;                            // 표준편차를 받는 변수

	for (j = 0; j < MAX_COUNT; j++)            // 평균값을 구하는 방식
	{
		sum = sum + num[j];
        avg  = (double)sum / MAX_COUNT;
	}
		
	for (p = 0; p < MAX_COUNT; p++)            // 분산값을 구하는 방식
	{
		var = var + (num[p] - avg) * (num[p] - avg);
	}

	for (k = 0; k < MAX_COUNT; k++)            // 표준편차를 구하는 방식
	{
		sta = sqrt(var);
	}
	
	printf("평균 : %.2f\n", avg);
	printf("분산 : %.2f\n", var);
	printf("표준편차 : %.2f\n", sta);

	return 0;
}