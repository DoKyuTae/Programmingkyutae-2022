#include <stdio.h>

#define min 2                                       // �ּ� �Ҽ� 2�� ����
#define line 5                                      // ��� �� ��½� ��, �� �� ����

int main(void)

{
	int a;                                           // �ԷµǴ� ���� ���� ����
	int i, j;                                        // �Ҽ� ���� ��, �Ҽ� ���� ����
	int p = 0;                                       // ��, �� ���� ����

	printf("input an number higher than or equal to 2 : ");
	scanf_s("%d", &a);

	for (i = min; i <= a; i++)                       // �ּ� �Ҽ� 2�� ���� ���Ŀ� �Էµ� �� ���ϱ��� i ����
	{
		for (j = min; j <= i; j++)                   // �ּ� �Ҽ� 2�� ���� ���Ŀ� j�� i ���Ϸ� ����
		{
			if (i % j == 0)                          // �Ҽ� ����� ���� ������ ����
			{
				if (i > j) break;                    // i > j �̸� �������� ����
				
				else                                 // �� ������ �ش���� �ʴ´ٸ� ��� �� ���
				{
					printf(" %d ", i);               // ��� �� ���
					p++;
					if (p % line == 0)               // p�� �����ϸ鼭 ��, �� ���� �°� ��� 
					printf("\n");
				}
			}
		}
	}
	
	return 0;

}