#include <stdio.h>
#include <stdlib.h>      
#include <math.h>                              // ��� �� ��Ʈ�� �̿��ϱ� ���� (sqrt)

#define MAX_COUNT 5                            // ���ڸ� �ִ� 5�� �޴´ٴ� ����

unsigned int GenRandNum(unsigned int nRange)   // ������ ���ڸ� ����� �Լ�
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}                                              // ������ ���� ���� �Լ� ����


int main(void)
{
	int nRange = 0;
	int i = 0;                                 // ��Ʈ ��¿� �ʿ��� ��������
	int j = 0;                                 // ��հ� ���ϴ� ����
	int p = 0;                                 // �л갪 ���ϴ� ����
	int k = 0;                                 // ǥ�������� ���ϴ� ����
	int nRes = 0;                              // ������ ���ڸ� �޴� ����
	int num[MAX_COUNT] = { 0 };                // ���ڸ� �����ϴ� �迭
	
	for (i = 0; i < MAX_COUNT; i++)
	{
		printf("input number, for generating the random number related to your input : ");
		scanf_s("%d", &nRange);
		int nRes = GenRandNum(nRange);         // ������ ���� �Լ� ȣ��
		printf("random number : %d\n", nRes);
		num[i] += nRes;                        // ������ ���ڸ� �迭�� ����
	}

	double sum = 0;                            // ������ ���� �޴� ����
	double avg = 0;                            // ��հ��� �޴� ����
	double var = 0;                            // �л갪�� �޴� ����
	double sta = 0;                            // ǥ�������� �޴� ����

	for (j = 0; j < MAX_COUNT; j++)            // ��հ��� ���ϴ� ���
	{
		sum = sum + num[j];
        avg  = (double)sum / MAX_COUNT;
	}
		
	for (p = 0; p < MAX_COUNT; p++)            // �л갪�� ���ϴ� ���
	{
		var = var + (num[p] - avg) * (num[p] - avg);
	}

	for (k = 0; k < MAX_COUNT; k++)            // ǥ�������� ���ϴ� ���
	{
		sta = sqrt(var);
	}
	
	printf("��� : %.2f\n", avg);
	printf("�л� : %.2f\n", var);
	printf("ǥ������ : %.2f\n", sta);

	return 0;
}