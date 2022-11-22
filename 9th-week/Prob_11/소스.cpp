#include <stdio.h>

#define MAX_LEN 1000
#define FIRST 1
#define INITI 0

int main(void)
{
	FILE* afp, * bfp;                                    // 파일 포인터 지정
	
	afp = fopen("yolo_label_data.txt", "r");             // 파일을 읽기 형식으로 불러오기
	bfp = fopen("yolo_bbox_data.txt", "r");

	char file_1[MAX_LEN] = { INITI, };                   // 파일에 정보를 문자열로 설정
	char file_2[MAX_LEN] = { INITI, };
	
	fread(file_1, FIRST, MAX_LEN, afp);                  // 파일 정보 읽기
	printf("%s", file_1);
	
	fread(file_2, FIRST, MAX_LEN, bfp);
	printf("%s", file_2); 
	
	fclose(afp);                                         // 파일 닫기
	fclose(bfp);

	return 0;
}