#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	int a[2][3];
	double xres = 0;
	double yres = 0;

	printf("Simultaneous Equation....\n");
	printf("ax + by = c\n");
	printf("input number to a, b, c : \n");
	scanf_s("%d %d %d\n", &a[0][0], &a[0][1], &a[0][2]);
	
	printf("dx + ey = f\n");
	printf("input number to a, b, c : \n");
	scanf_s("%d %d %d\n", &a[1][0], &a[1][1], &a[1][2]);


	if (a[0][0] == 0 && a[0][1] == 0)
	{
		printf("error\n");
		return 0;
	}

	if (a[1][0] == 0 && a[1][1] == 0)
	{
		printf("error\n");
		return 0;
	}

	xres = (a[0][2] * a[1][1] - a[1][2] * a[0][1]) / (a[0][0] * a[1][1] - a[1][0] * a[0][1]);
	yres = (a[0][0] * a[1][2] - a[1][0] * a[0][2]) / (a[0][0] * a[1][1] - a[1][0] * a[0][1]);
	
	printf("%lfx + %lfy = %lf\n", a[0][0], a[0][1], a[0][2]);
	printf("%lfx + %lfy = %lf\n", a[1][0], a[1][1], a[1][2]);
	printf("연립방정식의 해는 X = %lf Y = %lf", xres, yres);

	return 0;
}