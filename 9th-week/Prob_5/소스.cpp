#include <stdio.h>
#include <stdlib.h>

#define MAX_SEAT 5

typedef struct train Train;

struct train
{
	int seat;
	Train *next;
};

int main(void)
{
	Train *head = NULL;
	Train *tail = NULL;
	int i;

	for (i = 0; i < MAX_SEAT; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train *)malloc(sizeof(Train));
		}

		else
		{
			tail->next = (Train *)malloc(sizeof(Train));
			tail->next = tail;
		}
	}

	printf("%d", sizeof(Train));

	return 0;
}