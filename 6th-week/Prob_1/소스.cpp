#include <stdio.h>
#include <string.h>                                        // strcmp ����ϱ� ����

#define PASSWORLD "dokyu19"                                // ��й�ȣ ����
#define SIZE 50                                            // �迭 ũ�� ����

int main(void)
{
	char mypass[] = { PASSWORLD };                        // ��й�ȣ ���� ����
	char inpass[SIZE] = { 0 };                            // �Է¹��� ��й�ȣ ���� ����

	while (1)
	{
		printf("input password : ");
		scanf_s("%s", inpass, SIZE);                      // ��й�ȣ �Է�, �迭 ��ġ ����

		
		
			if (strcmp(inpass, mypass) == 0)             // ������ ��й�ȣ�� �Էµ� ��й�ȣ ��
			{
				printf("nomal termination..\n");         // ������ ��Ʈ ��� �� ���α׷� ����
				break;
			}
			
			printf("not matched, retry..\n");            // Ʋ���� ��Ʈ ��� �� �ٽ� �Է� �ܰ�� ���ư�
	}

	return 0;
}