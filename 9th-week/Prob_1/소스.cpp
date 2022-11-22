#include <stdio.h>
#include <stdlib.h>

#define NUM_ZERO 0                                           // �ʱ�ȭ ����
#define NUM_FIR 1                                            // ���꿡 �ʿ��� ����
#define NUM_SEC 2
#define NUM_STR 5                                            // �� �ٿ� 5���� ���

int main(void)
{
	int *pi;                                                 // ������ ����, ���� ����
	int num;
	int i, j = NUM_ZERO;

	printf("input a positive number : ");
	scanf_s("%d", &num);

	pi = (int*)malloc((num - NUM_FIR) * sizeof(int));        // ������� �Ҵ�
	
	for (i = NUM_ZERO; i < num - NUM_FIR; i++)
	{
		pi[i] = i + NUM_SEC;
	}
	
	i = NUM_ZERO;

	while (NUM_FIR)                                          // �Է��� ���� ���� �ȿ��� �Ҽ��� ã�� ����
	{
		while ((pi[i] == NUM_ZERO) && (i < num - NUM_SEC))
		{
			i++;
		}

		if (i == num - NUM_SEC) break;
		
			for (j = i + NUM_FIR; j < num - NUM_FIR; j++)
			{
				if (pi[j] % pi[i] == NUM_ZERO)
				{
					pi[j] = NUM_ZERO;
				}
			}

			i++;
	}
	
	for (i = NUM_ZERO; i < num - NUM_SEC; i++)               // �Ҽ��� ���ٿ� 5���� ����ϰ� �Ҽ��� �ƴϸ� X�� ���
	{
		if (pi[i] != NUM_ZERO)
		{
			printf("%5d", pi[i]);
		}
		
		else
		{
			printf("%5c", 'X');
		}

		if ((i + NUM_FIR) % NUM_STR == NUM_ZERO)
		{
			printf("\n");
		}
	}
	
	free(pi);

	return 0;
}