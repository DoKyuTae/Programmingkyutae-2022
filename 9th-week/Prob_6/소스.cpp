#include <stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	char c;
	char direction;
	COLOR my_color = YELLOW, c;
	ARROW direction = UP;

	for (c = CYAN; c <= BLACK; c++)
	{
		direction ++;
		direction = direction % 4;
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