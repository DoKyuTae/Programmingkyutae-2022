#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[] = "C:\ Document\ Github\ Test\ test.txt";  // ������� ���ڿ� 32, NULL ���� 33
	char* res;
	res = strtok(str, " ");
	int len = sizeof(str);


	printf("%d\n", len);


	while (res != NULL)
	{
		
		printf("%s\n", res);
		res = strtok(NULL, " ");
	}

	return 0;
}