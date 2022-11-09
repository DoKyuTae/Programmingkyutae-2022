#include <stdio.h>
#include <string.h>                                           // strcpy �Լ��� �������� ������� ȣ��


#define SIZE_NUM 20                                           // �迭�� �ִ�ũ�� ���� ����
#define STR_NUM 3                                             // �Է¹��� ���� ���� ����
#define NUM_FIRST 1
#define INITI_NUM 0


void sort_str(char(*str)[SIZE_NUM], int nstr)                 // ���������� �ܾ �迭�ϴ� �Լ� ����
{
	int i, j;                                                 // for���� ����� ���� ����, ���ڸ� �����ϴ� �迭 ����
	int temp;
	char res[SIZE_NUM];


	for (i = INITI_NUM; i < nstr - NUM_FIRST; i++)
	{
		temp = i;
		
		for (j = i + NUM_FIRST; j < nstr; j++)
		{
			if (strcmp(str[temp], str[j]) > INITI_NUM)        // ���ڸ� ���������� ��
			{
				temp = j;
			}
		}
		
		strcpy_s(res, str[i]);                                // ���ڸ� ���������� ��ȯ
		strcpy_s(str[i], str[temp]);
		strcpy_s(str[temp], res);

	}
}

int main(void)                                                // main �Լ� ����
{
	int i;
	int nstr = STR_NUM;                                       // �Է¹��� ���� ���� ����
	char str[SIZE_NUM][SIZE_NUM];
	
	
	for(i = INITI_NUM; i < nstr; i++)                         // ������ ����ŭ ���� �Է�
	{
		printf("input your words : ");
		scanf_s("%s", &str[i], SIZE_NUM);
	}

	sort_str(str, nstr);                                      // �Էµ� ���ڸ� ���������� �迭�ϴ� �Լ� ȣ��

	printf("in dictionary order : \n");                       // ���������� �迭�� ���� ���
	
	for (i = INITI_NUM; i < nstr; i++)
	{
		printf(" %s ", str[i]);
	}

	return 0;

}