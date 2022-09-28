#include <stdio.h>

#define asize 85 // age < 20 size
#define bsize 95
#define csize 90 // age >= 20 size
#define dsize 100

int main(void)

{
	int chestsize, age = 0;
	char nchestsize;


	printf("input your age, chest size : ");
	scanf_s("%d%d", &age, &chestsize);

	if (age < 20)
	{
		if (chestsize < asize)
		{
			nchestsize = 'S';
		}
		else if (chestsize >= asize && chestsize < bsize)
		{
			nchestsize = 'M';
		}
		else
		{
			nchestsize = 'L';
		}

	}
	else
	{
		if (chestsize < csize)
		{
			nchestsize = 'S';
		}
		else if (chestsize >= csize && chestsize < dsize)
		{
			nchestsize = 'M';
		}
		else
		{
			nchestsize = 'L';
		}
	}

	printf("your size : %c", nchestsize);

	return 0;
}