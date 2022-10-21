#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_COUNT 10

void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}

int main(void)
{
	int num[MAX_COUNT] = { 0 };
	int i = 0;
	int j = 0;

	GenRandSeed();
	
	printf("create Random Integer : ");
	for (i = 0; i < MAX_COUNT; i++)
	{
		num[i] = rand() * MAX_COUNT / RAND_MAX;
		printf("%d ", num[i]);
	}

	return 0;
}