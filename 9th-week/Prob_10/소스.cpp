#include <stdio.h>

int main(void)
{

	FILE* fp = fopen("test.txt", "w");              // ������ ���� �������� ����

	fputs("1 2 3 4 5 6 \n", fp);                    // ���� �Է�

	fputs("1.0 2.0 3.0 4.0 \n", fp);                // �Ǽ� �Է�

	fputs("A \n", fp);                              // ���� �Է�

	fputs("The End", fp);                           // ���ڿ� �Է�
	
	fclose(fp);                                     // ���� �ݱ�

	return 0;

}