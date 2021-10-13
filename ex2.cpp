#include <iostream>
#define TEXT "Welcome to C++Programming!!\n"

using namespace std;

int main()
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

	int num1 = 3;
	int num2 = -7;
	bool result1, result2;

	result1 = (num1 > 0) && (num1 < 5);
	result2 = (num2 < 0) || (num2 > 10);
    
	cout << "&& 연산자에 의한 결괏값은 " << result1 << "입니다." << endl;
	cout << "|| 연산자에 의한 결괏값은 " << result2 << "입니다." << endl;
	cout << " !연산자에 의한 결괏값은 " << !result2 << "입니다." << endl;

	return 0;
}