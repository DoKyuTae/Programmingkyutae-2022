#include <stdio.h>

#define SET_NUM1 10                                        // �Ŀ� �ʿ��� ���� ����
#define SET_NUM2 20
#define SET_INITI 0

void add_by_pointer(int *pa, int *pb, int *pr)             // a�� b�� �����͸� �̿��Ͽ� ����ϴ� �Լ� ����
{
	*pr = *pa + *pb;
}

int main(void)                                             // main �Լ� ����
{
	int a = SET_NUM1;                                      // ���� ����
	int b = SET_NUM2;
	int res = SET_INITI;

	add_by_pointer(&a, &b, &res);                          // a�� b�� �����͸� �̿��Ͽ� ����ϴ� �Լ� ȣ��
	
	printf("%d", res);                                     // ��� �� ���

	return 0;

}