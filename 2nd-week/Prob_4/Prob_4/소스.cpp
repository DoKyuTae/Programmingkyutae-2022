#include <stdio.h>
int main(void)

{
	double weight, height, heightm;
	
	printf("weight height input : ");
	scanf_s("%lf%lf",&weight, &height);
	
	heightm = (height * 0.01);
	double bmi = weight / (heightm * heightm);

	(bmi >= 20.0 && bmi < 25.0)
		? printf("normal\n")
		: printf("you manage your weight\n");

	return 0;
}