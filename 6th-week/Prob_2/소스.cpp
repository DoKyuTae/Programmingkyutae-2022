#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}


int main(void)
{
	int nRange = 0;
	int i = 0;
	int j = 0;
	int p = 0;
	int k = 0;
	
	for (i = 0; i < 5; i++)
	{
		printf("input number, for generating the random number related to your input : ");
		scanf_s("%d", &nRange);
		int nRes = GenRandNum(nRange);
		printf("random number : %d\n", nRes);
	}

	int nRes = GenRandNum(nRange);
	int num[5] = { nRes };
	double sum = 0;
	double avg = 0;
	double var = 0;
	double sta = 0; 

	for (j = 0; j < 5; j++)
	{
		sum = sum + num[j];
        avg  = (double)sum / 5;
	}
		
	for (p = 0; p < 5; p++)
	{
		var = var + (num[p] - avg) * (num[p] - avg);
	}

	for (k = 0; k < 5; k++)
	{
		sta = sqrt(var);
	}
	
	printf("평균 : %.2f\n", avg);
	printf("분산 : %.2f\n", var);
	printf("표준편차 : %.2f\n", sta);

	
	return 0;
}