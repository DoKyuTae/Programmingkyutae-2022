#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100                                           // �ִ� ���ڿ� ũ��

#define STR_1 "C:\\Document\\Github\\Test1\\test.txt"          // ���� ���ڿ�
#define STR_2 "C:\\Document\\Github\\Test1\\test2.txt"         // �ٲ�� ���ڿ�


int main(void)
{
    
    char str_1[MAX_SIZE] = STR_1;                              // ���ڿ� ����
    char str_2[MAX_SIZE] = STR_2;
    char* pstr = str_1;                                        // ������ ����

    printf("Text Before Changing : %s\n\n", pstr);             // ���� ���ڿ� ���

    strcpy_s(str_1, str_2);                                    // str_2 ���ڿ��� str_1�� ����

    printf("Text After Changing : %s\n", pstr);                // �ٲ� ���ڿ� ���
   
    return 0;

}