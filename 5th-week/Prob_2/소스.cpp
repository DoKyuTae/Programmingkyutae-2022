#include <stdio.h>

#define min 2
#define line 5

int main(void)

{
	int a;
	int i, j, k;
	int p = 0;

	printf("input an number higher than or equal to 2 : ");
	scanf_s("%d", &a);

	for (i = min; i <= a; i++)
	{
		for (j = min; j <= i; j++)
		{
			if (i % j == 0)
			{
				if (i > j) break;
				
				else
				{
					printf(" %d ", i);
					p++;
					if (p % line == 0)
					printf("\n");
				}
			}
		}
	}
	
	return 0;

}