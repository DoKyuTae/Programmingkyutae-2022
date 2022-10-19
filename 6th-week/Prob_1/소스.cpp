#include <stdio.h>
#include <string.h>

#define PASSWORLD "dokyu19"
#define SIZE 50

int main(void)
{
	char mypass[] = { PASSWORLD };
	char inpass[SIZE] = { 0 };

	while (1)
	{
		printf("input password : ");
		scanf_s("%s", inpass, SIZE);

		
		
			if (strcmp(inpass, mypass) == 0)
			{
				printf("nomal termination..\n");
				break;
			}
			
			printf("not matched, retry..\n");
	}

	return 0;
}