#include <stdio.h>
#include <string.h>


int main(void)
{
	char mypass[] = "dokyu19";
	char inpass[100] = {};
	int i = 0;
	char *p;
	char *q;

	p = inpass;
	q = mypass;


	while (1)
	{
		printf("input password : ");
		scanf_s("%s", inpass, inpass[10]);

		for(i = 0; i < 10; i++)
		{
			if (mypass[i] == inpass[i])
			{
				break;
			}
		}
		if (i == 10)
		{
			printf("nomal termination..\n");
		}
		else
		{
			printf("not matched, retry..\n");
		}
	}



	return 0;
}