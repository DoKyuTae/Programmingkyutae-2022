#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100                                                    // 문자열의 최대 크기
#define STR_LOC 1                                                       // 문자열 위치
#define STR_LOC_NAME 5                                                  // 문자열에서 파일명 위치
#define STR_LOC_EXTE 6                                                  // 문자열에서 확장자 위치


int main(void)
{
    int i;                                                              // 변수 설정
    int count = 0;
   
    char str[MAX_SIZE] = "C:\\Document\\Github\\Test1\\test.txt";       // 문자열 선언
    char* pstr = str;
    
    char* cut_str[MAX_SIZE] = { NULL, };
    char* text;
    
    char* extract = strtok_s(pstr, "\\", &text);                        // \\ 기준으로 자른다는 의미
    
    while (extract != NULL)                                             // 문자열에서 \\ 기준으로 하여 자르고 저장
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, "\\", &text);
    }

    extract = strtok_s(cut_str[count - STR_LOC], ".", &text);
    
    while (extract != NULL)                                             // 문자열에서 " " 기준으로 자름
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, ".", &text);
    }

    printf("Top File Name : %s \nExtension : %s\n", cut_str[STR_LOC_NAME], cut_str[STR_LOC_EXTE]);
                                                                        // 파일명과 확장자 부분 출력

    return 0;

}