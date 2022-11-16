#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	int num;
	int i, j = 0;

	printf("input a positive number : ");
	scanf_s("%d", &num);

	pi = (int*)malloc((num - 1) * sizeof(int));
	
	for (i = 0; i < num - 1; i++)
	{
		pi[i] = i + 2;
	}
	
	i = 0;

	while (1)
	{
		while ((pi[i] == 0) && (i < num - 2))
		{
			i++;
		}

		if (i == num - 2) break;
		
			for (j = i + 1; j < num -1; j++)
			{
				if (pi[j] % pi[i] == 0)
				{
					pi[j] = 0;
				}
			}

			i++;
	}
	
	for (i = 0; i < num - 2; i++)
	{
		if (pi[i] != 0)
		{
			printf("%5d", pi[i]);
		}
		
		else
		{
			printf("%5c", 'X');
		}

		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}
	
	free(pi);

	return 0;
}