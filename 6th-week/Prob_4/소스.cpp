#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 10                                 // �ִ� ���� ����

void GenRandSeed()                                 // ������ ���ڸ� ����� �Լ�
{
	srand((unsigned int)(time(NULL)));
	return;
}                                                  // ������ ���ڸ� ����� �Լ� ����


int main(void)
{
	int num[MAX_NUM] = { 0 };                      // ���ڸ� �����ϴ� �迭
	int i = 0;                                     // �ݺ��ϴ� Ƚ�� ���� ����
	int j = 0;                                     // �ݺ��ϴ� Ƚ�� ���� ����
	int res = 0;                                   // �������� �������� ��� �� ���� ����

	GenRandSeed();                                 // ������ ���ڸ� ����� �Լ� ȣ��
	
	printf("Create Random Integer : ");

	for (i = 0; i < MAX_NUM; i++)                  // ������ ���ڸ� MAX_NUM ���� ����
	{
		num[i] = rand() * MAX_NUM / RAND_MAX;
		printf("%d ", num[i]);
	}

	for (i = 0; i < MAX_NUM - 1; i++)              // �������� ����
	{
		for (j = 0; j < MAX_NUM - 1 - i; j++)
		{
			if (num[j] < num[j + 1])               // ���ڸ� ���ؼ� ū���� �ڷ� ����
			{
				res = num[j];
				num[j] = num[j + 1];
				num[j + 1] = res;
			}
		}
	}
	
	printf("\n");

	printf("\ndescending order : ");               // �������� ���
	
	for (i = 0; i < MAX_NUM; i++)                  // MAX_NUM ���� ����� �迭 ���
	{
		printf("%d ", num[i]);
	}

	for (i = 0; i < MAX_NUM - 1; i++)              // �������� ����
	{
		for (j = 0; j < MAX_NUM - 1 - i; j++)
		{
			if (num[j] > num[j + 1])               // ���ڸ� ���ؼ� �������� ������ ����
			{
				res = num[j];
				num[j] = num[j + 1];
				num[j + 1] = res;
			}
		}
	}
	

	printf("\n");
	
	printf("\nascending order : ");                // �������� ���
	
	for (i = 0; i < MAX_NUM; i++)                  // MAX_NUM ���� ����� �迭 ���
	{
		printf("%d ", num[i]);
	}
	
	return 0;
}

