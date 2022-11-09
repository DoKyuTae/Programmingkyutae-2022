#include <stdio.h>

void input_data(int *pa, int *pb);                         // ���ڸ� �Է��� �Լ� ����
void swap_data(void);                                      // ���ڸ� ���� �ٲٴ� �Լ� ����
void print_data(int a, int b);                             // �ٲ� ���ڸ� ����ϴ� �Լ� ����

int a, b;                                                  // ���� ����   

int main(void)                                             // main �Լ� ����
{
	input_data(&a, &b);                                    // ���ڸ� �Է��� �Լ� ȣ��
	swap_data();                                           // ���ڸ� ���� �ٲٴ� �Լ� ȣ��
	print_data(a, b);                                      // �ٲ� ���ڸ� ����ϴ� �Լ� ȣ��

	return 0;

}                                                          // main �Լ� ����

void input_data(int *pa, int *pb)                          // ���ڸ� �Է��� �Լ� ����
{
	printf("input two numbers : ");
	scanf_s("%d %d", pa, pb);                              // ���� �Է�
}

void swap_data(void)                                       // ���ڸ� ���� �ٲٴ� �Լ� ����
{
	int res;                                               // ���� ������ �ٲٱ� ���� ���� ����
	
	res = a;
	a = b;
	b = res;
}

void print_data(int a, int b)                              // �ٲ� ���ڸ� ����ϴ� �Լ� ����
{
	printf("output two numbers : %d %d", a, b);
}