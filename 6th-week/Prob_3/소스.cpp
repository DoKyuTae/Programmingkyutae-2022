#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MATRIX_A 3
#define MATRIX_B 3
#define MAX_NUM 100


void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}


int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
	int a[MATRIX_A][MATRIX_B] = { 0 };
	int b[MATRIX_B][MATRIX_A] = { 0 };
	int res = 0;

	GenRandSeed();
	
	printf("matrix A : \n");
	
	for (i = 0; i < MATRIX_A; i++)
	{
		for (j = 0; j < MATRIX_B; j++)
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;
			printf("\t%d", a[i][j]);
		}
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
		printf("\n");
	}
	printf("");

	printf("multiplication of matrices A and B : \n");
	
	for (i = 0; i < MATRIX_A; i++)
	{
		for (k = 0; k < MATRIX_A; k++)
		{
			for (j = 0, p = 0; j < MATRIX_B; j++, p++)
			{
				res += a[i][j] * b[p][k];
			}
			printf("\t%d", res);
		}

		printf("\n");

	}

	return 0;
}