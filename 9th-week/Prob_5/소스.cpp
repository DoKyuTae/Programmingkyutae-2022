#include <stdio.h>
#include <stdlib.h>

#define MAX_SEAT 5                                                   // 최대 좌석 수

typedef struct train Train;

struct train                                                         // 구조체 설정
{
	int seat;                                                        // 객차의 좌석 수
	Train *next;                                                     // 다음 객차를 연결할 포인터
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

	printf("seats : %d", sizeof(Train));                                     // 좌석수 출력

	return 0;
}