/*
#include "iostream"
// #include ""
using namespace std;

int main(void)
{
/ *
	char (*pchar)[10] = new char[dim][10];
	delete [] pchar;
* /
	int* ptr_int = new int;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 100.123;

	cout << "int�� ������ ����" << *ptr_int << "�Դϴ�" << endl;
	cout << "int�� ������ �޸� �ּҴ�" << ptr_int << "�Դϴ�" << endl;

	cout << "double�� ������ ����" << *ptr_double << "�Դϴ�" << endl;
	cout << " double�� ������ �޸� �ּҴ� " << ptr_double << "�Դϴ�" << endl;

	delete ptr_int;
	delete ptr_double;
	return 0;

}*/

#include <stdio.h>
#include <stdlib.h>
#include "iostream"

int main_new(int argc, char **argv)
{
/*
	int SizeOfArray;
		int *arr;

	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeOfArray);
	
	arr = (int *)malloc(sizeof(int) * SizeOfArray);
	
	free(arr);
*/

	int i, student;
	int *score;
	int sum = 0;

	printf("�л��� ����? :");
	scanf_s("%d", &student);

//	score = (int*)malloc(student * sizeof(int));

	score = new int[student] ;
	for ( i = 0; i < student; i ++)
	{
		printf("�л� %d�� ���� :", i);
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < student; i++)
	{
		sum += score[i];

	}

	printf("��ü �л� ��� ���� : %d \n", sum / student);
//	free(score);

	delete score;

/*
	int i;
	int x, y;
	int **arr;

	printf("arr[x][y] �� ���� ���Դϴ�.\n");
	scanf("%d %d", &x, &y);

//	arr = (int **)malloc(sizeof(int *) * x);

	arr = new int*[x];
	
	for ( i = 0; i < x; i++);
	{
//		arr[i] = (int*)malloc(sizeof(int) * y);
		arr[i] = new int[y];
		
	}
	printf("���� �Ϸ�! \n");
	for ( i = 0; i < x; i++)
	{
//		free(arr[i]);
		delete arr[i];
	}

//	free(arr);

	delete arr;
*/

/*
	int i, j, input,sum = 0;
	int subject, students;
	int **arr;
	// arr[subject][student] �迭 ����

	printf("���� �� : ");
	scanf_s("%d", &subject);
	
	printf("�л��� �� : ");
	scanf_s("%d",&students);

	//arr = (int **)malloc(sizeof(int *) * subject);
	arr = new int*[subject];
	for (i = 0; i < subject; i++)
	{
		//arr[i] = (int *)malloc(sizeof(int) * students);
		arr[i] = new int[students];
	}
	
	for ( i = 0; i < subject; i++)
	{
		printf("���� %d ���� -------- \n", i);
		
		for(j = 0; j < students; j++)
		{
			printf("�л� %d ���� �Է� : ", j);

			scanf_s("%d", &input);

			arr[i][j] = input;
		}
	}
	for ( i = 0; i < subject; i++)
	{
		sum = 0;
		for(j = 0; j < students; j++)
		{
			sum += arr[i][j];
		}
		printf("���� %d ��� ���� : %d \n", i, sum / students);
	}
	for ( i = 0; i < subject; i++)
	{
		delete arr[i];
	}
	delete arr;
*/


	return 0;
}

