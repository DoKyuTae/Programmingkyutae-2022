#include <stdio.h>
#include <string.h>


#define MAX_LEN 80
#define CPY_NUM 1

int main(void)
{
	char str[MAX_LEN];

	strcpy(str, "wine");
	strcat(str, "apple");
	strncpy(str, "pine", CPY_NUM);
	
	printf("%s, %d\n", str, strlen(str));
	
	return 0;

}