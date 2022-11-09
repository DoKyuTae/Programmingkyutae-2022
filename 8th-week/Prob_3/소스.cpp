#include <stdio.h>
#include <string.h>                                           // strcpy 함수를 쓰기위한 헤더파일 호출


#define SIZE_NUM 20                                           // 배열의 최대크기 숫자 설정
#define STR_NUM 3                                             // 입력받을 문자 갯수 설정
#define NUM_FIRST 1
#define INITI_NUM 0


void sort_str(char(*str)[SIZE_NUM], int nstr)                 // 사전순으로 단어를 배열하는 함수 정의
{
	int i, j;                                                 // for문에 사용할 문자 설정, 문자를 저장하는 배열 설정
	int temp;
	char res[SIZE_NUM];


	for (i = INITI_NUM; i < nstr - NUM_FIRST; i++)
	{
		temp = i;
		
		for (j = i + NUM_FIRST; j < nstr; j++)
		{
			if (strcmp(str[temp], str[j]) > INITI_NUM)        // 문자를 사전순으로 비교
			{
				temp = j;
			}
		}
		
		strcpy_s(res, str[i]);                                // 문자를 사전순으로 변환
		strcpy_s(str[i], str[temp]);
		strcpy_s(str[temp], res);

	}
}

int main(void)                                                // main 함수 시작
{
	int i;
	int nstr = STR_NUM;                                       // 입력받을 문자 갯수 설정
	char str[SIZE_NUM][SIZE_NUM];
	
	
	for(i = INITI_NUM; i < nstr; i++)                         // 정해진 수만큼 문자 입력
	{
		printf("input your words : ");
		scanf_s("%s", &str[i], SIZE_NUM);
	}

	sort_str(str, nstr);                                      // 입력된 문자를 사전순으로 배열하는 함수 호출

	printf("in dictionary order : \n");                       // 사전순으로 배열된 문자 출력
	
	for (i = INITI_NUM; i < nstr; i++)
	{
		printf(" %s ", str[i]);
	}

	return 0;

}