#include <stdio.h>

struct inform
{
	int price;
	int calorie;
};

int main(void)
{
	struct inform snack;
	
	printf("Input snack price and calorie : ");
	scanf_s("%d %d", &(snack.price), &(snack.calorie));

	printf("\nThe price of a snack : %d Won\n", snack.price);
	printf("The calorie of a snack : %d kcal\n", snack.calorie);

	return 0;

}