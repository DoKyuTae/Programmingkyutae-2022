#include <stdio.h>

int main(void)
{
	char ch;

	printf("input : ");
	scanf_s("%c", &ch);
	printf("%c ASCII code %d\n", ch, ch);

	return 0;
}