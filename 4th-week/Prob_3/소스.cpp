#include <stdio.h>

int main(void)

{
	int nA = 0;                  //���� ���� ����
	int nB = 0;                  //���� ���� ����
	int result = 0;              //���� ��� ���� ����
	char ch;                     //���Ŀ� ���� �Ǵ� ���� ���� ����


	printf("Input Mathetic Equation :");
	scanf_s("%d %c %d", &nA, &ch, 1, &nB);   //1�� scan�� ����뷮 �������� ����


	switch (ch)
	{
	    case '+':
		{
			printf("Plus : ");                               //�Է��� ������ + �̸� �������� �ϰ� ���
			int result = nA + nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
	    case '-':
		{
			printf("Subtraction : ");                        //�Է��� ������ - �̸� �������� �ϰ� ���
			int result = nA - nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
	    case '*':
		{
			printf("Multiply : ");                           //�Է��� ������ * �̸� �������� �ϰ� ���
			int result = nA * nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
		case '/':
		{
			printf("Divide : ");                              //�Է��� ������ / �̸� ���������� �ϰ� ���
			int result = nA / nB;
			printf("%d %c %d = %d\n", nA, ch, nB, result);
			break;
		}
		default:                                              //�ش����� �ʴ´ٸ� ���α׷��� �����ٴ� ��
		{
			break;
		}

		return 0;

	}


}