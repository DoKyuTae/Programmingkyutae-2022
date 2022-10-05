#include <stdio.h>

int plus(int x, int y);            // ���ϱ⸦ plus �Լ��� ����
int sub(int x, int y);             // ���⸦ sub �Լ��� ����
int mul(int x, int y);             // ���ϱ⸦ mul �Լ��� ����
int div(int x, int y);             // divide set 'div' function

int plus(int x, int y)             // definition plus function
{
	int temp;                      // set variable result
	
	temp = x + y;                  // saving result to temp

	return temp;                   // give back temp
}                                  // plus function end

int sub(int x, int y)              // sub �Լ� ���� ����
{
	int temp;                      // ��� ���� ������ ���� ����

	temp = x - y;                  // ��� ���� temp�� ����

	return temp;                   // temp�� ���� ��ȯ
}                                  // sub �Լ� 
int mul(int x, int y)              // mul �Լ� ���� ����
{
	int temp;                      // ��� ���� ������ ���� ����

	temp = x * y;                  // ��� ���� temp�� ����

	return temp;                   // temp�� ���� ��ȯ
}                                  // sub �Լ� ��

int div(int x, int y)              // div �Լ� ���� ����
{
	int temp;                      // ��� ���� ������ ���� ����

	temp = x / y;                  // ��� ���� temp�� ����

	return temp;                   // temp�� ���� ��ȯ
}                                  // sub �Լ� ��

int main(void)                   // main �Լ� ����

{
	int nA = 0;                  // ���� ���� ����
	int nB = 0;                  // ���� ���� ����
	int result = 0;              // ���� ��� ���� ����
	char ch;                     // ���Ŀ� ���� �Ǵ� ���� ���� ����


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   // 1�� scan�� ����뷮 �������� ����


	switch (ch)
	{
	case '+':
	{
		printf("Plus : ");                               // �Է��� ������ + �̸� �������� �ϰ� ���
		int result = plus(nA, nB);                       // plus �Լ� ȣ��
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '-':
	{
		printf("Subtraction : ");                        // �Է��� ������ - �̸� �������� �ϰ� ���
		int result = sub(nA, nB);                        // sub �Լ� ȣ��
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '*':
	{
		printf("Multiply : ");                           // �Է��� ������ * �̸� �������� �ϰ� ���
		int result = mul(nA, nB);                        // mul �Լ� ȣ��
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	case '/':
	{
		printf("Divide : ");                              // �Է��� ������ / �̸� ���������� �ϰ� ���
		int result = div(nA, nB);                         // div �Լ� ȣ��
		printf("%d %c %d = %d\n", nA, ch, nB, result);
		break;
	}
	default:                                              // �ش����� �ʴ´ٸ� ���α׷��� �����ٴ� ��
	{
		break;
	}

	return 0;

	}	                                                  // main �Լ� ��
}