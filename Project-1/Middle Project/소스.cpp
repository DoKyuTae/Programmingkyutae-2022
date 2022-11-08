#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int m, n;
	int equation[4][4];


	printf("방정식을 입력하시오... \n\n");

	for (m = 0; m < 2; m++)
	{
		for (n = 0; n < 3; n++)
		{
			printf("[%i][%i] : ", m + 1, n + 1);
			scanf_s("%i", &equation[m][n]);
		}
		printf("\n");
	}

	printf("입력한 방정식은\n\n");

	for (m = 0; m < 2; m++)
	{
		printf(" %ix + %iy = %i\n", equation[m][0], equation[m][1], equation[m][2]);
	}

	double xres = 0;
	double yres = 0;

	xres = ((double)equation[0][2] * (double)equation[1][1] - (double)equation[1][2] * (double)equation[0][1]) / ((double)equation[0][0] * (double)equation[1][1] - (double)equation[1][0] * (double)equation[0][1]);
	yres = ((double)equation[0][0] * (double)equation[1][2] - (double)equation[1][0] * (double)equation[0][2]) / ((double)equation[0][0] * (double)equation[1][1] - (double)equation[1][0] * (double)equation[0][1]);



	printf("\n입력한 방정식의 해는 x = %.2f", xres);
	printf("\n입력한 방정식의 해는 x = %.2f", yres);

	return;

}