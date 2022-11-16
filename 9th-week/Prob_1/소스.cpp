#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	int size = 5;
	int count = 0;
	int num;

	int a;
	int i, j;
	int p = 0;

	pi = (int *)calloc(size, sizeof(int));

	printf("input a positive number : ");
	scanf_s("%d", &a);

	while (1)
	{
		if (a <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int *)realloc(pi, size * sizeof(int));
		}

	}
	

	for (i = 2; i <= a; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				if (i > j) break;

				else
				{
					printf(" %d ", i);
					p++;
					if (p % 5 == 0)
						printf("\n");
				}
			}
		}
	}

	return 0;
}