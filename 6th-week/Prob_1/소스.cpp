#include <stdio.h>
#include <string.h>


int main(void)
{
	char mypass[100] = "dokyu19";
	char inpass[100];
	

	while (1)
	{
		printf("input password : ");
		scanf_s("%c", inpass);

		if (strcmp(mypass, inpass))
			printf("not matched, retry..\n");
		else
		{
			printf("nomal termination..\n");
			break;
		}
	}

	return 0;
}