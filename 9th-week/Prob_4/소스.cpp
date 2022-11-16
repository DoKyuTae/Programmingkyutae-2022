#include <stdio.h>

#define MAX_STR 20
#define AGE 22
#define HEIGHT 187.5

struct marriage
{
	char name[MAX_STR];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { "Andy", AGE, 'm', HEIGHT};
	
	struct marriage *mp = &m1;

	printf("NAME : %s\n", mp -> name);
	printf("AGE : %d\n", mp -> age);
	printf("SEX : %c\n", mp -> sex);
	printf("NAME : %.2f\n", mp -> height);

	return 0;

}