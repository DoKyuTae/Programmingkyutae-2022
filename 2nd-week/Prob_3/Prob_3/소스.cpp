#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits = kor + eng + mat;

	double kscore = 3.80, escore = 4.40, mscore = 3.90;
	double grade = ((double)kscore + (double)escore + (double)mscore) / 3.00;
	int res = (credits >= 10, grade > 4.00);


	printf("ALL GRADES : %d\n", credits);
	printf("AVERAGE : %.2f\n", grade);
	res = credits >= 10 && grade > 4.00;
	printf("%d\n", res);

	return 0;
}