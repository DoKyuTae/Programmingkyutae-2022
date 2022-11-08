#include <stdio.h>
#include <stdlib.h>


#define MAX_NUM 10                                                                    // �迭�� �ִ�ũ��
#define NUM_INITI 0                                                                   // �� ���� �ʱ�ȭ ����
#define NUM_FIRST 1                                                                   // �迭 ǥ���� �ʿ��� ����
#define NUM_SECOND 2
#define NUM_LINE 3                                                                    // ��� ǥ���� �ʿ��� ����
#define NUM_RANK 4


void main(void)
{
	int m, n;                                                                         // ����� ����µ� �ʿ��� ���� ����
	int equation[MAX_NUM][MAX_NUM];                                                   // ����� �����ϴ� �迭 ����

	
	for(m = NUM_INITI; m < NUM_LINE; m++)                                             // �������� ������� ��Ÿ������ ǥ��
	{
		printf("[%i][0]x + [%i][1]y + [%i][2]z = [%i][3]\n\n", m, m, m, m);
	}
	
	printf("Enter the equation.... \n\n");

	for (m = NUM_INITI; m < NUM_LINE; m++)                                            // �����Ŀ� �� ���� �Է�
	{
		
		for (n = NUM_INITI; n < NUM_RANK; n++)
		{
			printf("[%i][%i] : ", m, n);
			scanf_s("%i", &equation[m][n]);
		}
		
		printf("\n");

	}

	printf("Your system of equations\n\n");

	for (m = NUM_INITI; m < NUM_LINE; m++)                                            // �Է��� ������ ���
	{
		printf(" %ix + %iy + %iz = %i\n", equation[m][NUM_INITI], equation[m][NUM_FIRST], equation[m][NUM_SECOND], equation[m][NUM_LINE]);
	}

	double mres1 = NUM_INITI;                                                         // ������ �ؿ��� �и� �� ���� ����
	double mres2 = NUM_INITI;
	double mres = NUM_INITI;

	
	mres1 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_INITI] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_FIRST];
	
	mres2 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_FIRST] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_INITI];
	
	// ũ���� ������ �̿��Ͽ� ������ �ؿ��� �и�κ� ǥ��
	
	mres = (double)mres1 - (double)mres2;                                             // ������ �ؿ��� �и�κ� ǥ��
	
	
	double res1 = NUM_INITI;                                                          // ������ �ؿ��� x�������� ���� ����
	double res2 = NUM_INITI;                                                          // ������ �ؿ��� y�������� ���� ����
	double res3 = NUM_INITI;                                                          // ������ �ؿ��� z�������� ���� ����
	

	res1 = (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_SECOND] +
		   (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_LINE] +
		   (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_FIRST]
		- ( (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_FIRST] +
		    (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_SECOND] +
		    (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_LINE] );

	// ũ���� ������ �̿��Ͽ� ������ �ؿ��� x�� ���ϴ� ����


	res2 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_SECOND] +
		   (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_INITI] +
		   (double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_LINE]
		- ( (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_SECOND] * (double)equation[NUM_SECOND][NUM_LINE] +
			(double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_SECOND] +
			(double)equation[NUM_INITI][NUM_SECOND] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_INITI] );

	// ũ���� ������ �̿��Ͽ� ������ �ؿ��� y�� ���ϴ� ����


	res3 = (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_LINE] +
		   (double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_INITI] +
		   (double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_FIRST]
		- ( (double)equation[NUM_INITI][NUM_INITI] * (double)equation[NUM_FIRST][NUM_LINE] * (double)equation[NUM_SECOND][NUM_FIRST] +
			(double)equation[NUM_INITI][NUM_FIRST] * (double)equation[NUM_FIRST][NUM_INITI] * (double)equation[NUM_SECOND][NUM_LINE] +
			(double)equation[NUM_INITI][NUM_LINE] * (double)equation[NUM_FIRST][NUM_FIRST] * (double)equation[NUM_SECOND][NUM_INITI] );

	// ũ���� ������ �̿��Ͽ� ������ �ؿ��� z�� ���ϴ� ����
	
	
	double xres = NUM_INITI;                                                          // ���������� x���� ���� ���� ����
	double yres = NUM_INITI;                                                          // ���������� y���� ���� ���� ����
	double zres = NUM_INITI;                                                          // ���������� z���� ���� ���� ����
	
	
	xres = (double)res1 / (double)mres;                                               // �������� x��   
	yres = (double)res2 / (double)mres;                                               // �������� y��
	zres = (double)res3 / (double)mres;                                               // �������� z��


	printf("\nSolution of equations\n");
	printf("\n x = %.2f", xres);                                                      // ������ �� ���
	printf("\n y = %.2f", yres);
	printf("\n z = %.2f", zres);

	return;

}