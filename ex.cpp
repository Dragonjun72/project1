#include <iostream>
#define TEXT "Welcome to C++Programming!!\n"

using namespace std;

int main()
{
// 	int age;
// 	cout << "�������� ���̸� �Է��� �ּ��� : ";
// 	cin >> age;
// 
// 	cout << "�������� ���̴�" << age << "�� �Դϴ�." << endl;

// 	int a = 10;
// 
// 	cout << "���� 10�� 10������ ǥ���ϸ�" << a << "�̸�," << endl;
// 	cout << oct;
// 	cout << "���� 10�� 8������ ǥ���ϸ�" << a << "�̸�," << endl;
// 	cout << hex;
// 	cout << "���� 10�� 16������ ǥ���ϸ�" << a << "�Դϴ�.";

// 	int num = 2147483647;
// 	cout << "���� num�� ����� ����" << num << "�Դϴ�." << endl;
// 
// 	num = 2147483648;
// 	cout << "���� num�� ����� ���� " << num << "�Դϴ�." << endl;
// 
// 
// 	float num01 = 3.1415926535897932;
// 	cout << "���� num01�� ����� ���� " << num01 << "�Դϴ�." << endl;
// 
// 	double num02 = 3.1415926535897932;
// 	cout << "���� num02�� ����� ���� " << num02 << "�Դϴ�." << endl;

// 	int i;
// 	float sum = 0;
// 
// 	for(i = 0; i < 1000; i++)
// 	{
// 		sum += 0.1;
// 	}
// 	cout << "0.1�� 1000�� ���� �հ�� " << sum <<"�Դϴ�.";

// 	int num1 = 3.1415; //int ���� �Ǽ��� �����ϹǷ� �Ҽ��� �Ʒ� �������� �ս��� �߻�
// 	int num2 = 8.3E12; //int�� ������ �ִ� ������ �ʰ��� �����ͷ� �̻��Ѱ�����
// 	double num3 = 5; // ���� ������ ū double���� ���� ������ ���� int�� �����͸� �����ϸ� ��������
// 
// 	cout << "num1�� ����� ����" << num1 << "�Դϴ�." << endl;
// 	cout << "num2�� ����� ����" << num2 << "�Դϴ�." << endl;
// 	cout << "num3�� ����� ����" << num3 << "�Դϴ�.";

// 	double result1 = 5 + 3.14;
// 	double result2 = 5.0f + 3.14;
// 
// 	cout << "result1�� ����� ����" << result1 << "�Դϴ�." << endl;
// 	cout << "result2�� ����� ����" << result2 << "�Դϴ�.";

	int num1 =1;
	int num2 = 4;

	double result1 = num1 / num2;
	double result2 = (double) num1 / num2;
	double result3 = double(num1) / num2;

	cout << "result1�� ����� ����" << result1 << "�Դϴ�." << endl;
	cout << "result2�� ����� ����" << result2 << "�Դϴ�." << endl;
	cout << "result3�� ����� ����" << result3 << "�Դϴ�.";

	return 0;
}