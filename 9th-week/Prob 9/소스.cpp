#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100

#define STR_1 "C:\\Document\\Github\\Test1\\test.txt"
#define STR_2 "C:\\Document\\Github\\Test1\\test2.txt"


int main(void)
{
    
    char str_1[MAX_SIZE] = STR_1;
    char str_2[MAX_SIZE] = STR_2;
    char* pstr = str_1;

    char* cut_str[MAX_SIZE] = { NULL, };
    char* text;

    printf("Text Before Changing : %s\n\n", pstr);

    strcpy_s(str_1, str_2);

    printf("Text After Changing : %s\n", pstr);
   
    return 0;

}