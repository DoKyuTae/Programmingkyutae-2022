#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MATRIX_A 3                                        // n x m ��� n �� ��
#define MATRIX_B 5                                        // n x m ��� m �� ��
#define MAX_NUM 100                                       // ������ ���� ���� ����


void GenRandSeed()                                        // ������ ���� ���� �Լ�
{
	srand((unsigned int)(time(NULL)));
	return;
}                                                         // ������ ���� ���� �Լ� ����


int main(void)
{
	int i = 0;                                            // ����� ����µ� �ʿ��� ����
	int j = 0;
	int k = 0;
	int p = 0;
	int a[MATRIX_A][MATRIX_B] = { 0 };                    // ����� ����µ� �ʿ��� �迭
	int b[MATRIX_B][MATRIX_A] = { 0 };
	

	GenRandSeed();                                        // ������ ���� ���� �Լ� ȣ��
	
	printf("matrix A : \n");
	
	for (i = 0; i < MATRIX_A; i++)                        // ���� ������ MATRIX_A
	{
		
		for (j = 0; j < MATRIX_B; j++)                    // ���� ������ MATRIX_B
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;        // ������ ������ �迭�� ����
			printf("\t%d", a[i][j]);                      // ��� A ���
		}
		
		printf("\n");
	
	}
	
	printf("");

	printf("matrix B : \n");

	for (p = 0; p < MATRIX_B; p++)                        // ���� ������ MATRIX_B
	{
		
		for (k = 0; k < MATRIX_A; k++)                    // ���� ������ MATRIX_A
		{
			b[p][k] = rand() * MAX_NUM / RAND_MAX;        // ������ ������ �迭�� ����
			printf("\t%d", b[p][k]);                      // ��� B ���
		}

		printf("\n");
	
	}

	printf("");

	printf("multiplication of matrices A and B : \n");
	
	for (i = 0; i < MATRIX_A; i++)                        // ��� A�� B�� ���� ����� n(MATRIX_A) x n(MATRIX_A)
	{
		
		for (k = 0; k < MATRIX_A; k++)
		{
			
			int res = 0;                                  // ��� ���� ���� ������ ���� ����
			
			for (j = 0; j < MATRIX_B; j++)                // ��� A(n x m), B(m x n)�� m�� �� 
			{
				res += a[i][j] * b[j][k];                 // ��� A�� B�� ��
			}
			
			printf("\t%d", res);                          // ����� �� ���

		}

		printf("\n");

	}

	return 0;
}