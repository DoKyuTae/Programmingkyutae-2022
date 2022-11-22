#include <stdio.h>

#define DIR_NUM 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;               // 구조체 선언 및 재정의
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	COLOR my_color = YELLOW;                                           // 변수 설정
	int c;
	int direction = UP;

	for (c = CYAN; c <= BLACK; c++)                                    // 저장된 구조체 값에서 원하는 값 찾기
	{
		direction ++;
		direction = direction % DIR_NUM;
		if (c == my_color) break;
	}

	switch (direction)                                                 // 방향에 따른 출력 값
	{
	case UP : 
		printf("Current Direction : up");
		break;
	
	case DOWN :
		printf("Current Direction : down");
		break;
	
	case LEFT:
		printf("Current Direction : left");
		break;
	
	case RIGHT:
		printf("Current Direction : right");
		break;
	}

	return 0;

}