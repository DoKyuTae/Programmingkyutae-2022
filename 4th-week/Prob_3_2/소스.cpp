#include <stdio.h>

int main(void)

{
	int nA = 0;                  //���� ���� ����
	int nB = 0;                  //���� ���� ����
	int result = 0;              //���� ��� ���� ����
	char ch;                     //���Ŀ� ���� �Ǵ� ���� ���� ����


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   //1�� scan�� ����뷮 �������� ����


	if (ch == '+')
	{
		printf("Plus : ");                               //�Է��� ������ + �̸� �������� �ϰ� ���
		int result = nA + nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '-')
	{
		printf("Subtraction : ");                        //�Է��� ������ - �̸� �������� �ϰ� ���
		int result = nA - nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '*')
	{
		printf("Multiply : ");                           //�Է��� ������ * �̸� �������� �ϰ� ���
		int result = nA * nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else if (ch == '/')
	{
		printf("Divide : ");                              //�Է��� ������ / �̸� ���������� �ϰ� ���
		int result = nA / nB;
		printf("%d %c %d = %d\n", nA, ch, nB, result);
	}
	else
	{
		return 0;                                         //���ǿ� �����ϴ� ���� ������ ���α׷� ����
	}


}