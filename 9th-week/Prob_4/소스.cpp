#include <stdio.h>

#define MAX_STR 20                                        // �ι� ����
#define NAME "Andy"
#define AGE 22
#define SEX 'm'
#define HEIGHT 187.5

struct marriage                                           // ����ü ����
{
	char name[MAX_STR];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { NAME, AGE, SEX, HEIGHT};       // ����ü�� ����
	
	struct marriage *mp = &m1;

	printf("NAME : %s\n", mp -> name);                    // ����ü�� ���� ���
	printf("AGE : %dyears\n", mp -> age);
	printf("SEX : %c\n", mp -> sex);
	printf("HEIGHT : %.2fcm\n", mp -> height);

	return 0;

}