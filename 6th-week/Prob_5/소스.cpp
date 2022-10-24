#include <stdio.h>
#include <stdlib.h>      
#include <math.h>
#include <time.h>

#define MAX_NUM 100
#define MAX_NUMS 1


void GenRandSeed()                                       
{
	srand((unsigned int)(time(NULL)));
	return;
}                                                   


int main(void)
{
	double num[MAX_NUM] = { 0 };
	int i = 0;
	int j = 0;
	double a[MAX_NUM][MAX_NUM];

	GenRandSeed();

	printf("matrix A : \n");

	for (i = 0; i < MAX_NUM; i++)
	{

		for (j = 0; j < MAX_NUM; j++)
		{
			a[i][j] = rand() * MAX_NUMS / (double)RAND_MAX;
			printf("\t%.3f", a[i][j]);
		}

		printf("\n");

	}

	printf("");

	return 0;

}
