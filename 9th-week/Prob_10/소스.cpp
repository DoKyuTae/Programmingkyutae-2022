#include <stdio.h>

int main(void)
{

	FILE* fp = fopen("test.txt", "w");              // 파일을 쓰기 전용으로 열기

	fputs("1 2 3 4 5 6 \n", fp);                    // 정수 입력

	fputs("1.0 2.0 3.0 4.0 \n", fp);                // 실수 입력

	fputs("A \n", fp);                              // 문자 입력

	fputs("The End", fp);                           // 문자열 입력
	
	fclose(fp);                                     // 파일 닫기

	return 0;

}