#include <stdio.h>
#include <string.h>                          // str�� ���õ� �Լ��� �̿��ϱ� ���� ������� ȣ��


#define MAX_LEN 80                           // �迭�� �ִ�ũ�� ����
#define CPY_NUM 1                            // �����Ϸ��� ������ ������ ǥ���ϴ� ����

int main(void)
{
	char str[MAX_LEN];                       // ���ڿ��� ������ �迭 ����

	strcpy(str, "wine");                     // �迭 str�� wine ���ڿ��� �����Ͽ� ����
	strcat(str, "apple");                    // �迭 str�� ����� ���ڿ� �ڿ� apple ����
	strncpy(str, "pine", CPY_NUM);           // �迭 str�� ����� ���ڿ��� ù���ڸ� p�� ��ȯ
	
	printf("%s, %d\n", str, strlen(str));    // �迭 str�� ����� ���ڿ��� ���ڿ��� ���� ���
	
	return 0;

}