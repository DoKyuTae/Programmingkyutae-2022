#include <stdio.h>

#define DIR_NUM 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	COLOR my_color = YELLOW;
	int c;
	int direction = UP;

	for (c = CYAN; c <= BLACK; c++)
	{
		direction ++;
		direction = direction % DIR_NUM;
		if (c == my_color) break;
	}

	switch (direction)
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