#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "";
	char str1[] = "";
	char str2[] = "abcde";
	char strstar[] = "*****************";
	

	printf("input your words : ");
	scanf_s("%s", str);

	printf("your words : %s\n", str);
	
	if (sizeof(str) > sizeof(str2))
	{
		strncpy_s(str1, str, 5);
		
		strncat(str1, strstar, sizeof(str) - 5);

		printf("your omitted words : %s", str1);
	}
	
	else
	{
		strncpy_s(str1, str, 5);
	    printf("your omitted words : %s\n", str1);
	}
	
	return 0;

}