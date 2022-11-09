#include <stdio.h>
#include<string.h>

int main(void)
{
	char str1[100] = "";
	char str2[100] = "";
	char str3[100] = "";


	printf("input three words : ");
	scanf_s("%s %s %s", str1, str2, str3, 100);

	printf("in dictionary order : \n");

	if (strcmp(str1, str2) >= 0)
	{
		printf("%s", str1);
	}
	
	if (strcmp(str1, str3) >= 0)
	{

	}

	if (strcmp(str2, str3) >= 0)
	{
		printf("%s", str2);
	}
	
	else
	{
		printf("%s", str3);
	}
	
	return 0;

}