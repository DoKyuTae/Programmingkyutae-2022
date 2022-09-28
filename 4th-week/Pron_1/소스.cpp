#include <stdio.h>

#define maxsize 100
#define minsize 90

int main(void)

{
	int chestsize = 0;
	char nchestsize;

	printf("input your chest size : ");
	scanf_s("%d", &chestsize);

	if (chestsize <= minsize)
	{
		nchestsize = 'S';
	}
	else if (chestsize > minsize && chestsize <= maxsize)
	{
		nchestsize = 'M';
	}
	else
	{
		nchestsize = 'L';
	}

	printf("your size : %c", nchestsize);

	return 0;
}