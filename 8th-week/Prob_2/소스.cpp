#include <stdio.h>
#include <string.h>                                            // str ���� �Լ��� ���� ������� ȣ��

#define MAX_NUM 100                                            // ���ڿ��� ������ �迭�� �ִ�ũ��
#define MAX_LEN 5                                              // ���ڿ� 5���� �������� �Ǵ��ϱ� ���� ����


int main(void)
{
	char str[MAX_NUM] = "";                                    // ���ڿ��� ������ �迭 ����
	char str1[MAX_NUM] = "";                      
	char strstar[MAX_NUM] = "*****************";               // * ǥ�ð� �ʿ��Ͽ� �迭�� ����
	

	printf("input your words : ");
	scanf_s("%s", str, MAX_NUM);                               // ���� �Է��ϱ�

	printf("your words : %s\n", str);
	
	if (strlen(str) > MAX_LEN)                                 // ���ڿ��� 5�� �̻��̸� 5������ �ڸ���
	{                                                          // �� �ڿ� �߸� ���ڸ�ŭ �� ����
		strncpy(str1, str, MAX_LEN);
		
		strncat(str1, strstar, strlen(str) - MAX_LEN);

		printf("your omitted words : %s", str1);               // ������ �ܾ� ���
	}
	
	else
	{
		strncpy(str1, str, MAX_LEN);                           // ���ڿ��� 5�� ���� ������ �״�� ���
	    printf("your omitted words : %s\n", str1);
	}
	
	return 0;

}