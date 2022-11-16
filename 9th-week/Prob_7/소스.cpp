#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int num;
	char name[30];
	char grade;
	int kor;
	int eng;
	int math;
	int sum;
	double avg;

}Student;


void input_data(Student *pdata);
void cal_data(Student *pdata);
void sort_data(Student *pdata);
void print_data(Student *pdata);


int main(void)
{
	
	Student data[5];

	input_data(data);
	
	printf("\n\nBefore Sortting Data : \n\n");
	
	cal_data(data);
	print_data(data);
	sort_data(data);

	printf("\n\nAfter Sortting Data : \n\n");

	print_data(data);

	return 0;

}

void input_data(Student *pdata)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		
		printf("input your school number : ");
		scanf_s("%d", &pdata->num);
		
		printf("input your name : ");
		scanf_s("%s", pdata->name, 5);
		
		printf("input your Korean, English, Math score : ");
		scanf_s("%d %d %d", &pdata->kor, &pdata->eng, &pdata->math);
		
		pdata++;

	}
}

void cal_data(Student* pdata)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		pdata->sum = pdata->kor + pdata->eng + pdata->math;
		pdata->avg = pdata->sum / 3.0;

		if (pdata->avg > 90.0)
		{
			pdata->grade = 'A';
		}

		else if (pdata->avg >= 80.0)
		{
			pdata->grade = 'B';
		}

		else if (pdata->avg >= 70.0)
		{
			pdata->grade = 'C';
		}
		
		else
		{
			pdata->grade = 'F';
		}

		pdata++;

	}
}

void sort_data(Student* pdata)
{
	Student res;
	int i, j;
	int max_num;

	for (i = 0; i < 4; i++)
	{
		max_num = i;

		for (j = i + 1; j < 5; j++)
		{
			if (pdata[max_num].sum < pdata[j].sum)
			{
				max_num = j;
			}
		}

		if (max_num != i)
		{
			res = pdata[max_num];
			pdata[max_num] = pdata[i];
			pdata[i] = res;
		}
	}
}

void print_data(Student* pdata)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d %s %d %d %d %d %.1f %c\n", 
			pdata->num, pdata->name, pdata->kor, 
			pdata->eng, pdata->math, pdata->sum, 
			pdata->avg, pdata->grade);

		pdata++;

	}
}