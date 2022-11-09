#include <stdio.h>
#include <string.h>                          // str에 관련된 함수를 이용하기 위한 헤더파일 호출


#define MAX_LEN 80                           // 배열의 최대크기 숫자
#define CPY_NUM 1                            // 복사하려는 문자의 갯수를 표시하는 숫자

int main(void)
{
	char str[MAX_LEN];                       // 문자열을 저장할 배열 설정

	strcpy(str, "wine");                     // 배열 str에 wine 문자열을 복사하여 저장
	strcat(str, "apple");                    // 배열 str에 저장된 문자열 뒤에 apple 저장
	strncpy(str, "pine", CPY_NUM);           // 배열 str에 저장된 문자열의 첫글자를 p로 변환
	
	printf("%s, %d\n", str, strlen(str));    // 배열 str에 저장된 문자열과 문자열의 길이 출력
	
	return 0;

}