#include <stdio.h>
#include <string.h>                                            // str 관련 함수를 위한 헤더파일 호출

#define MAX_NUM 100                                            // 문자열을 저장할 배열의 최대크기
#define MAX_LEN 5                                              // 문자열 5개를 기준으로 판단하기 위한 숫자


int main(void)
{
	char str[MAX_NUM] = "";                                    // 문자열을 저장할 배열 설정
	char str1[MAX_NUM] = "";                      
	char strstar[MAX_NUM] = "*****************";               // * 표시가 필요하여 배열로 설정
	

	printf("input your words : ");
	scanf_s("%s", str, MAX_NUM);                               // 문자 입력하기

	printf("your words : %s\n", str);
	
	if (strlen(str) > MAX_LEN)                                 // 문자열이 5개 이상이면 5개까지 자르고
	{                                                          // 그 뒤에 잘린 문자만큼 별 대입
		strncpy(str1, str, MAX_LEN);
		
		strncat(str1, strstar, strlen(str) - MAX_LEN);

		printf("your omitted words : %s", str1);               // 생략한 단어 출력
	}
	
	else
	{
		strncpy(str1, str, MAX_LEN);                           // 문자열이 5개 보다 작으면 그대로 출력
	    printf("your omitted words : %s\n", str1);
	}
	
	return 0;

}