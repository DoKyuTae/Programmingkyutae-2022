#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}



unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}


int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int p = 0;
    int a[3][5], b[3][5];
	GenRandSeed();
	int nRange = 0;
	

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			int nRes = GenRandNum(nRange);
			a[i][j] = GenRandNum(nRange);
			printf("matrix : %d", a[i][j]);
		}
		j = 0;
		printf(" ");
	}
	printf(" ");

	return 0;
}