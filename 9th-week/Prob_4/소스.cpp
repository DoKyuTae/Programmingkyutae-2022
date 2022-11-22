#include <stdio.h>

#define MAX_STR 20                                        // 인물 정보
#define NAME "Andy"
#define AGE 22
#define SEX 'm'
#define HEIGHT 187.5

struct marriage                                           // 구조체 설정
{
	char name[MAX_STR];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { NAME, AGE, SEX, HEIGHT};       // 구조체의 정보
	
	struct marriage *mp = &m1;

	printf("NAME : %s\n", mp -> name);                    // 구조체의 정보 출력
	printf("AGE : %dyears\n", mp -> age);
	printf("SEX : %c\n", mp -> sex);
	printf("HEIGHT : %.2fcm\n", mp -> height);

	return 0;

}