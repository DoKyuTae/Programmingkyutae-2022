#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100                                           // 최대 문자열 크기

#define STR_1 "C:\\Document\\Github\\Test1\\test.txt"          // 원래 문자열
#define STR_2 "C:\\Document\\Github\\Test1\\test2.txt"         // 바뀌는 문자열


int main(void)
{
    
    char str_1[MAX_SIZE] = STR_1;                              // 문자열 선언
    char str_2[MAX_SIZE] = STR_2;
    char* pstr = str_1;                                        // 포인터 선언

    printf("Text Before Changing : %s\n\n", pstr);             // 원래 문자열 출력

    strcpy_s(str_1, str_2);                                    // str_2 문자열을 str_1에 복사

    printf("Text After Changing : %s\n", pstr);                // 바뀐 문자열 출력
   
    return 0;

}