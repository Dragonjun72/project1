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

	cout << "int형 숫자의 값은" << *ptr_int << "입니다" << endl;
	cout << "int형 숫자의 메모리 주소는" << ptr_int << "입니다" << endl;

	cout << "double형 숫자의 값은" << *ptr_double << "입니다" << endl;
	cout << " double형 숫자의 메모리 주소는 " << ptr_double << "입니다" << endl;

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

	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeOfArray);
	
	arr = (int *)malloc(sizeof(int) * SizeOfArray);
	
	free(arr);
*/

	int i, student;
	int *score;
	int sum = 0;

	printf("학생의 수는? :");
	scanf_s("%d", &student);

//	score = (int*)malloc(student * sizeof(int));

	score = new int[student] ;
	for ( i = 0; i < student; i ++)
	{
		printf("학생 %d의 점수 :", i);
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < student; i++)
	{
		sum += score[i];

	}

	printf("전체 학생 평균 점수 : %d \n", sum / student);
//	free(score);

	delete score;

/*
	int i;
	int x, y;
	int **arr;

	printf("arr[x][y] 를 만들 것입니다.\n");
	scanf("%d %d", &x, &y);

//	arr = (int **)malloc(sizeof(int *) * x);

	arr = new int*[x];
	
	for ( i = 0; i < x; i++);
	{
//		arr[i] = (int*)malloc(sizeof(int) * y);
		arr[i] = new int[y];
		
	}
	printf("생성 완료! \n");
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
	// arr[subject][student] 배열 생성

	printf("과목 수 : ");
	scanf_s("%d", &subject);
	
	printf("학생의 수 : ");
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
		printf("과목 %d 점수 -------- \n", i);
		
		for(j = 0; j < students; j++)
		{
			printf("학생 %d 점수 입력 : ", j);

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
		printf("과목 %d 평균 점수 : %d \n", i, sum / students);
	}
	for ( i = 0; i < subject; i++)
	{
		delete arr[i];
	}
	delete arr;
*/


	return 0;
}

