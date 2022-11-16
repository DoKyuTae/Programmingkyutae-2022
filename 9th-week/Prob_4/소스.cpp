#include <stdio.h>

struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };
	
	struct marriage *mp = &m1;

	printf("NAME : %s\n", mp -> name);
	printf("AGE : %d\n", mp -> age);
	printf("SEX : %c\n", mp -> sex);
	printf("NAME : %.2f\n", mp -> height);

	return 0;

}