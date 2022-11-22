#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100                                                    // ���ڿ��� �ִ� ũ��
#define STR_LOC 1                                                       // ���ڿ� ��ġ
#define STR_LOC_NAME 5                                                  // ���ڿ����� ���ϸ� ��ġ
#define STR_LOC_EXTE 6                                                  // ���ڿ����� Ȯ���� ��ġ


int main(void)
{
    int i;                                                              // ���� ����
    int count = 0;
   
    char str[MAX_SIZE] = "C:\\Document\\Github\\Test1\\test.txt";       // ���ڿ� ����
    char* pstr = str;
    
    char* cut_str[MAX_SIZE] = { NULL, };
    char* text;
    
    char* extract = strtok_s(pstr, "\\", &text);                        // \\ �������� �ڸ��ٴ� �ǹ�
    
    while (extract != NULL)                                             // ���ڿ����� \\ �������� �Ͽ� �ڸ��� ����
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, "\\", &text);
    }

    extract = strtok_s(cut_str[count - STR_LOC], ".", &text);
    
    while (extract != NULL)                                             // ���ڿ����� " " �������� �ڸ�
    {
        cut_str[count] = extract;
        count++;
        extract = strtok_s(NULL, ".", &text);
    }

    printf("Top File Name : %s \nExtension : %s\n", cut_str[STR_LOC_NAME], cut_str[STR_LOC_EXTE]);
                                                                        // ���ϸ�� Ȯ���� �κ� ���

    return 0;

}