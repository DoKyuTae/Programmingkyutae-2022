#include <stdio.h>

#define MAX_LEN 1000
#define FIRST 1
#define INITI 0

int main(void)
{
	FILE* afp, * bfp;                                    // ���� ������ ����
	
	afp = fopen("yolo_label_data.txt", "r");             // ������ �б� �������� �ҷ�����
	bfp = fopen("yolo_bbox_data.txt", "r");

	char file_1[MAX_LEN] = { INITI, };                   // ���Ͽ� ������ ���ڿ��� ����
	char file_2[MAX_LEN] = { INITI, };
	
	fread(file_1, FIRST, MAX_LEN, afp);                  // ���� ���� �б�
	printf("%s", file_1);
	
	fread(file_2, FIRST, MAX_LEN, bfp);
	printf("%s", file_2); 
	
	fclose(afp);                                         // ���� �ݱ�
	fclose(bfp);

	return 0;
}