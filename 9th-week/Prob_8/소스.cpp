#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 1000
#define STR_LOC 1
#define STR_LOC_NAME 5
#define STR_LOC_EXTE 6


int main(void)
{
    int i;
    int count = 0;
   
    char str[MAX_SIZE] = "C:\\Document\\Github\\Test1\\test.txt";
    char* pstr = str;
    
    char* cut_str[MAX_SIZE] = { NULL, };
    char* text;
    
    char* extract = strtok_s(pstr, "\\", &text);
    
    while (extract != NULL)
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, "\\", &text);
    }

    extract = strtok_s(cut_str[count - STR_LOC], ".", &text);
    
    while (extract != NULL)
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, ".", &text);
    }

    printf("Top File Name : %s \nExtension : %s\n", cut_str[STR_LOC_NAME], cut_str[STR_LOC_EXTE]);

    return 0;

}