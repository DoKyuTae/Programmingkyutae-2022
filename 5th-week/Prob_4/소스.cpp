#include <stdio.h>

int rec_func(int n);                   // 1���� n������ ���� ��ȯ�ϴ� �Լ�

int main(void)                         // main �Լ� ����

{
	int a = 0;                         // ������ ��Ÿ���� ���� ����
	int res = 0;                       // �Է��ϴ� ���ڸ� ���� ���� ����
	
	printf("input number : ");
	scanf_s("%d", &res);
	
	a = rec_func(res);                 // a�� ���� ����, �Էµ� ���ڰ� rec_func �Լ��� ����
	printf("result : %d", a);          // ���� �� ���

	return 0;
}                                      // main �Լ� ��

int rec_func(int n)                    // rec_func �Լ� ����
{
	if (n == 0) return n;              // n �� 0 �̸� ����
	
	n = n + rec_func(n-1);             // n�� ���� �Էµ� �� ���Ϸ� ���ϴ� ����
	
	return n;
}                                      // rec_func �Լ� ��