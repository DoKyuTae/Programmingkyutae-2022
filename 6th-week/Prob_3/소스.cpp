#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MATRIX_A 3
#define MATRIX_B 5
#define MAX_NUM 100

void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}

int cal()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
	int a[MATRIX_A][MATRIX_B] = { 0 };
	int b[MATRIX_B][MATRIX_A] = { 0 };
	int c[MATRIX_A][MATRIX_A] = { 0 };


	for (i = 0; i < MATRIX_A; i++)
	{
		for (k = 0; k < MATRIX_A; k++)
		{
			for (j = 0; j < MATRIX_B; j++)
			{
				c[i][k] += (a[i][j] * b[j][k]);
			}

		}
	}

	return 0;
}



int main(void)
{
	int nRange = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
	int a[MATRIX_A][MATRIX_B] = { 0 };
	int b[MATRIX_B][MATRIX_A] = { 0 };
	int res = 0;

	res = cal();

	GenRandSeed();
	
	printf("matrix A : \n");
	
	for (i = 0; i < MATRIX_A; i++)
	{
		for (j = 0; j < MATRIX_B; j++)
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;
			printf("\t%d", a[i][j]);
		}
		j = 0;
		printf("\n");
	}
	printf("");

	printf("matrix B : \n");

	for (p = 0; p < MATRIX_B; p++)
	{
		for (k = 0; k < MATRIX_A; k++)
		{
			b[p][k] = rand() * MAX_NUM / RAND_MAX;
			printf("\t%d", b[p][k]);
		}
		k = 0;
		printf("\n");
	}
	printf("");

	printf("calculate matrix A and matrix B : \t%d", res);

	return 0;
}