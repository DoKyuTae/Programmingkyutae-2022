#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_NUM 30                                                    // �̸��� �޴� ���ڿ��� ũ��
#define MAX_STU 5                                                     // �л� 5��
#define GRADE_1 90.0                                                  // ���� ���� ����
#define GRADE_2 80.0
#define GRADE_3 70.0
#define STR_NUM 4


typedef struct                                                        // ����ü ����
{
	int num;
	char name[MAX_NUM];
	char grade;
	int kor;
	int eng;
	int math;
	int sum;
	double avg;

}Student;                                                             // ����ü ������


void input_data(Student *pdata);                                      // �л��� ������ �Է��ϴ� �Լ� ����
void cal_data(Student *pdata);                                        // �л��� ������ �����ϴ� �Լ� ����
void sort_data(Student *pdata);                                       // �л��� ������ ���������� �����ϴ� �Լ� ����
void print_data(Student *pdata);                                      // �л��� ������ ����ϴ� �Լ� ����


int main(void)
{
	
	Student data[MAX_STU];                                            // �л���

	input_data(data);                                                 // �л��� ������ �Է��ϴ� �Լ� ȣ��
	
	printf("\n\nBefore Sortting Data : \n\n");
	
	cal_data(data);                                                   // �л��� ������ �����ϴ� �Լ� ȣ��
	print_data(data);                                                 // �л��� ������ ����ϴ� �Լ� ȣ��
	sort_data(data);                                                  // �л��� ������ ���������� �����ϴ� �Լ� ȣ��

	printf("\n\nAfter Sortting Data : \n\n");

	print_data(data);                                                 // �ٲ� ������ ���

	return 0;

}

void input_data(Student *pdata)                                       // �л��� ������ �Է��ϴ� �Լ� ����
{
	int i;

	for (i = 0; i < MAX_STU; i++)
	{
		
		printf("input your school number : ");
		scanf_s("%d", &pdata->num);
		
		printf("input your name : ");
		scanf_s("%s", pdata->name, MAX_STU);
		
		printf("input your Korean, English, Math score : ");
		scanf_s("%d %d %d", &pdata->kor, &pdata->eng, &pdata->math);
		
		pdata++;

	}
}

void cal_data(Student* pdata)                                         // �л��� ������ �����ϴ� �Լ� ����
{
	int i;

	for (i = 0; i < MAX_STU; i++)
	{
		pdata->sum = pdata->kor + pdata->eng + pdata->math;
		pdata->avg = pdata->sum / 3.0;

		if (pdata->avg > GRADE_1)
		{
			pdata->grade = 'A';
		}

		else if (pdata->avg >= GRADE_2)
		{
			pdata->grade = 'B';
		}

		else if (pdata->avg >= GRADE_3)
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

void sort_data(Student* pdata)                                        // �л��� ������ ���������� �����ϴ� �Լ� ����
{
	Student res;
	int i, j;
	int max_num;

	for (i = 0; i < STR_NUM; i++)
	{
		max_num = i;

		for (j = i + 1; j < MAX_STU; j++)
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

void print_data(Student* pdata)                                       // �л��� ������ ����ϴ� �Լ� ����
{
	int i;

	for (i = 0; i < MAX_STU; i++)
	{
		printf("%d %s %d %d %d %d %.1f %c\n", 
			pdata->num, pdata->name, pdata->kor, 
			pdata->eng, pdata->math, pdata->sum, 
			pdata->avg, pdata->grade);

		pdata++;

	}
}