#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
// 	int age;
// 	cout << "여러분의 나이를 입력해 주세요 : ";
// 	cin >> age;
// 
// 	cout << "여러분의 나이는" << age << "살 입니다." << endl;

// 	int a = 10;
// 
// 	cout << "숫자 10을 10진수로 표현하면" << a << "이며," << endl;
// 	cout << oct;
// 	cout << "숫자 10을 8진수로 표현하면" << a << "이며," << endl;
// 	cout << hex;
// 	cout << "숫자 10을 16진수로 표현하면" << a << "입니다.";

// 	int num = 2147483647;
// 	cout << "변수 num에 저장된 값은" << num << "입니다." << endl;
// 
// 	num = 2147483648;
// 	cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;
// 
// 
// 	float num01 = 3.1415926535897932;
// 	cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;
// 
// 	double num02 = 3.1415926535897932;
// 	cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;

// 	int i;
// 	float sum = 0;
// 
// 	for(i = 0; i < 1000; i++)
// 	{
// 		sum += 0.1;
// 	}
// 	cout << "0.1을 1000번 더한 합계는 " << sum <<"입니다.";

// 	int num1 = 3.1415; //int 형에 실수를 대입하므로 소수점 아래 데이터의 손실이 발생
// 	int num2 = 8.3E12; //int형 변수에 최대 범위를 초과한 데이터로 이상한값나옴
// 	double num3 = 5; // 연산 범위가 큰 double형에 연산 범위가 작은 int형 데이터를 대입하면 문제없음
// 
// 	cout << "num1에 저장된 값은" << num1 << "입니다." << endl;
// 	cout << "num2에 저장된 값은" << num2 << "입니다." << endl;
// 	cout << "num3에 저장된 값은" << num3 << "입니다.";

// 	double result1 = 5 + 3.14;
// 	double result2 = 5.0f + 3.14;
// 
// 	cout << "result1에 저장된 값은" << result1 << "입니다." << endl;
// 	cout << "result2에 저장된 값은" << result2 << "입니다.";

// 	int num1 =1;
// 	int num2 = 4;
// 
// 	double result1 = num1 / num2;
// 	double result2 = (double) num1 / num2;
// 	double result3 = double(num1) / num2;
// 
// 	cout << "result1에 저장된 값은" << result1 << "입니다." << endl;
// 	cout << "result2에 저장된 값은" << result2 << "입니다." << endl;
// 	cout << "result3에 저장된 값은" << result3 << "입니다.";

// 	int num1 = 8;
// 	int num2 = 8;
// 	int num3 = 8;
// 
// 	num1 = num1 + 5;
// 	num2 += 5;
// 	num3 =+5;
// 
// 	cout << "-연산자에 의한 결괏값은 " << num1 << "입니다." << endl;
// 	cout << "+= 연산자에 의한 결괏값은 " << num2 << "입니다." << endl;
// 	cout << "=+ 연산자에 의한 결괏값은 " << num3 << "입니다.";

// 	int num1 = 8;
// 	int num2 = 8;
// 	int result1, result2;
// 
// 	result1 = --num1 + 5;
// 	result2 = num2-- + 5;
// 
// 	cout << "전위 감소 연산자에 의한 결괏값은 " << result1 << "이고, 변수의 값은 " << num1 << "로 변했습니다." << endl;
// 	cout << "후위 감소 연산자에 의한 결괏값은 " << result2 << "이고, 변수의 값은 " << num2 << "로 변했습니다.";

// 
// 	int x = 10;
// 	int y = x-- + 5 + --x;
// 
// 	cout << "변수 x의 값은 " << x << "이고, 변수 y의 값은 " << y << "로 변했습니다.";

// 	int num1 = 3;
// 	int num2 = 7;
// 
// 	cout << "!= 연산자에 의한 결괏값은 " << (num1 != num2) << "입니다." << endl;
// 	cout << ">= 연산자에 의한 결괏값은 " << (num1 >= num2) << "입니다.";

// 	int num1 = 3;
// 	int num2 = -7;
// 	bool result1, result2;
// 
// 	result1 = (num1 > 0) && (num1 < 5);
// 	result2 = (num2 < 0) || (num2 > 10);
//     
// 	cout << "&& 연산자에 의한 결괏값은 " << result1 << "입니다." << endl;
// 	cout << "|| 연산자에 의한 결괏값은 " << result2 << "입니다." << endl;
// 	cout << " !연산자에 의한 결괏값은 " << !result2 << "입니다." << endl;

// 	int num1 = 15;
// 	int num2 = 8;
// 
// 	cout << "~ 연산자에 의한 결괏값은 " << (~num1) << "입니다." << endl;
// 	cout << " << 연산자에 의한 결괏값은 " << (num2 << 2) << "입니다." << endl;
// 	cout << " >> 연산자에 의한 결괏값은 " << (num2 >> 2) << "입니다." <<endl;

// 	int num1 = 11;
// 	int num2 = 10;
// 	int result;
// 
// 	result = (num1 < num2) ? num1 : num2;
// 
// 	cout << "둘 중 더 작은수는 " << result << "입니다." << endl;
	
// int num1 = 15, num2 = 8;
// 
// cout << "첫 번째 수는 " << num1 << "이고, 두 번째 수는 " << num2 << "입니다.";

// 	cout << " char형 데이터에 할당되는 메모리의 크기는 " << sizeof(char) << " 바이트입니다." << endl;
// 	cout << " short형 데이터에 할당되는 메모리의 크기는 " << sizeof(short) << " 바이트입니다." << endl;
// 	cout << " int형 데이터에 할당되는 메모리의 크기는 " << sizeof(int) << " 바이트입니다." << endl;
// 	cout << " long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long) << " 바이트입니다." << endl;
// 	cout << " longlong형 데이터에 할당되는 메모리의 크기는 " << sizeof(long long) << "바이트입니다." << endl;
// 	cout << " float형 데이터에 할당되는 메모리의 크기는 " << sizeof(float) << "바이트입니다." << endl;
// 	cout << "double형 데이터에 할당되는 메모리의 크기는 " << sizeof(double) << "바이트입니다." << endl;
// 	cout << " long double형 데이터에 할당되는 메모리의 크기는 " << sizeof(long double) << "바이트입니다." << endl;

/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "입력하신 수는 5보다 작습니다." << endl;
// 	}
// 	if (num == 5)
// 	{
// 		cout << "입력하신 수는 5입니다." << endl;
// 	}
// 	if (num > 5)
// 	{
// 		cout << "입력하신 수는 5보다 큽니다." << endl;
// 	}
*/

/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "입력하신 수는 5보다 작습니다." << endl;
// 	}
// 	else
// 	{
// 		if(num == 5)
// 		{
// 			cout << "입력하신 수는 5입니다." << endl;
// 		}
// 		else
// 		{
// 			cout << " 입력하신 수는 5보다 큽니다." << endl;
// 		}
// 	}
*/
/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "입력하신 수는 5보다 작습니다." << endl;
// 	}
// 	else if (num ==5)
// 	{
// 		cout << "입력하신 수는 5입니다." << endl;
// 	}
// 	else 
// 	{
// 		cout << "입력하신 수는 5보다 큽니다." << endl;
// 	}
*/



/*
// while(1)
// {
// 
// int num;
// cout << "숫자를 입력해주세요 : ";
// cin >> num;
// 
// switch (num)
// {
// case 1:
// 	cout << "입력하신 수는 1입니다." << endl;
// 	break;
// case 2:
// 	cout << "입력하신 수는 2입니다." << endl;
// 	break;
// case 3:
// 	cout << "입력하신 수는 3입니다." << endl;
// 	break;
// case 4:
// 	cout << "입력하신 수는 4입니다." << endl;
// 	break;
// case 5:
// 	cout << "입력하신 수는 5입니다." << endl;
// 	break;
// default:
// 	cout << "1부터 5까지의 수만 입력해주세요!" << endl;
// 	break ;
// 	
// }
// }
*/

/*
// 	while(1)
// 	{
// 
// 	
// 	char ch;
// 	cout << "학점을 입력하세요 :";
// 	cin >> ch;
// 	switch (ch)
// 	{
// 	case 'a':
// 	case 'A':
// 		cout << "이 학생의 학점은 A입니다." << endl;
// 		break;
// 	case 'b':
// 	case 'B':
// 		cout << "이 학생의 학점은 B입니다." << endl;
// 		break;
// 	case 'c':
// 	case 'C':
// 		cout << "이 학생의 학점은 C입니다." << endl;
// 		break;
// 	case 'd':
// 	case 'D':
// 		cout << "이 학생의 학점은 D입니다." << endl;
// 		break;
// 	case 'f':
// 	case 'F':
// 		cout << "이 학생의 학점은 F입니다." << endl;
// 		break;
// 	default:
// 		cout << "학점을 정확히 입력해 주세요!(A, B, C, D, F)" << endl;
// 		break;
// 	}
// 	}
*/
		

/*
// 	int i = 0, num = 5;
// 	while (i < num)
// 	{
// 		cout << "while 문이 현재" << i + 1 << " 번째 반복 실행중입니다." << endl;
// 		i++;
// 
// 	}
// 
// 	cout << "while 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;
*/

/*
// 	int i = 0, num = 5;
// 	do{
// 		cout << "do / while 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
// 		i++;
// 	}while (i > num);
// 	cout << "do / while 문이 종료된 후 변수 i의 값은" << i << "입니다." << endl;
// 
*/


/*
// 	int i = 0, num = 5;
// 	for(i = 0; i < num; i++)
// 	
// 		cout << "for 문이 현재" << i + 1 << " 번째 반복 수행중입니다." << endl;
// 	
// 	cout << "for 문이 종료된 후 변수 i의 값은" << i << "입니다." << endl;
*/

/*
// 	int num = 3;
// 	for(int i = 0; i < num; i++)
// 	{
// 		cout << "첫 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl;
// 	}
// 	cout << endl;
// 	for(int i = 0; i < num; i++)
// 	{
// 		cout << "두 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl;
// 	}
*/


/*
// 	int arr[5] = {1, 3, 5, 7, 9};
// 
// 	for (int element : arr)
// 	{
// 		cout << element << " ";
// 	}
*/

/*
// 	int except_num = 2;
// 
// 	for (int i = 0; i <= 100; i ++)
// 	{
// 		if (i % except_num == 0)
// 		{
// 			continue;
// 		}
// 		cout << i << " ";
// 	}
*/

/*
// 	int num1 = 6;
//     int ch;
// 	int num = 1, sum = 0;
// here:
// 	while( num < num1 ){
// 	cout << "1부터 다 더할 수를 입력하세요 : ";
// 	cin >> ch;
// 
// 	int end_num = ch;
// 	
// 	string str = ch;
// 	
// 	if ( isdigit(str[ch]) == 0 ){
// 		cout << "숫자를 입력하세요!" << endl;
// 		goto here;
// 	}
// 	else {
// 		continue;
// 	}
// 	
// 	while (1)
// 	{
// 		sum += num;
// 		if (num == end_num)
// 		{
// 			break;
// 		}
// 		num++;
// 	}
// 
// 	cout << "1부터 " << end_num << "까지 더한 값은 " << sum << "입니다." << endl;
// 
// 	
// 	continue;
// 	
// 	}
*/


/*
// 	int sum = 0;
// 	int grade[3];
// 
// 	grade[0] = 85;
// 	grade[1] = 65;
// 	grade[2] = 90;
// 
// 	for(int i = 0; i< 3; i++)
// 	{
// 		sum += grade[i];
// 	}
// 
// 	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 << "점입니다.";
*/

/*
// 	
// 
// 	int sum = 0;
// 	int grade[3] = {85, 65, 90};
// 
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum += grade[i];
// 	}
// 
// 	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 << "점입니다.";
*/


	
/*
	int sum = 0;
	int grade[3] = {85, 65, 90};
	grade[3] = 100;

	for (int i = 0; i < 4; i++)
	{
		sum += grade[i];
	}

	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 << "점입니다.";
*/
/*

int grade[] = {85, 65, 90};
int len = sizeof(grade) / sizeof(grade[0]);

cout << "배열 grade의 길이는 " << len << "입니다.";
*/


/*
	int var = 3.14;	
	cout << var << endl;
*/


/*
	int var = {3.14};
	cout << var << endl;
*/

/*
	int arr1[6] = {10, 20, 30, 40, 50, 60};
	int arr2[2][3] = {10, 20, 30, 40, 50, 60};
	
	cout << "arr1의 배열 요소의 값" << endl;
	cout << arr1[0] << " ";
	cout << arr1[1] << " ";
	cout << arr1[2] << " ";
	cout << arr1[3] << " ";
	cout << arr1[4] << " ";
	cout << arr1[5] << endl;

	cout << "arr2의 배열 요소의 값" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << " ";
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2] << " ";
*/



	int arr1[2][3] = {10, 20, 30, 40};
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	cout << "arr1의 배열 요소의 값" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << " ";
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl;

	cout << "arr2의 배열 요소의 값" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << " ";
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2] << endl;

 	return 0;
}


