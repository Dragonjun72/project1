#include <iostream>
#define TEXT "Welcome to C++Programming!!\n"

using namespace std;

int main(void)
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

// 	int num1 =1;
// 	int num2 = 4;
// 
// 	double result1 = num1 / num2;
// 	double result2 = (double) num1 / num2;
// 	double result3 = double(num1) / num2;
// 
// 	cout << "result1�� ����� ����" << result1 << "�Դϴ�." << endl;
// 	cout << "result2�� ����� ����" << result2 << "�Դϴ�." << endl;
// 	cout << "result3�� ����� ����" << result3 << "�Դϴ�.";

// 	int num1 = 8;
// 	int num2 = 8;
// 	int num3 = 8;
// 
// 	num1 = num1 + 5;
// 	num2 += 5;
// 	num3 =+5;
// 
// 	cout << "-�����ڿ� ���� �ᱣ���� " << num1 << "�Դϴ�." << endl;
// 	cout << "+= �����ڿ� ���� �ᱣ���� " << num2 << "�Դϴ�." << endl;
// 	cout << "=+ �����ڿ� ���� �ᱣ���� " << num3 << "�Դϴ�.";

// 	int num1 = 8;
// 	int num2 = 8;
// 	int result1, result2;
// 
// 	result1 = --num1 + 5;
// 	result2 = num2-- + 5;
// 
// 	cout << "���� ���� �����ڿ� ���� �ᱣ���� " << result1 << "�̰�, ������ ���� " << num1 << "�� ���߽��ϴ�." << endl;
// 	cout << "���� ���� �����ڿ� ���� �ᱣ���� " << result2 << "�̰�, ������ ���� " << num2 << "�� ���߽��ϴ�.";

// 
// 	int x = 10;
// 	int y = x-- + 5 + --x;
// 
// 	cout << "���� x�� ���� " << x << "�̰�, ���� y�� ���� " << y << "�� ���߽��ϴ�.";

// 	int num1 = 3;
// 	int num2 = 7;
// 
// 	cout << "!= �����ڿ� ���� �ᱣ���� " << (num1 != num2) << "�Դϴ�." << endl;
// 	cout << ">= �����ڿ� ���� �ᱣ���� " << (num1 >= num2) << "�Դϴ�.";

// 	int num1 = 3;
// 	int num2 = -7;
// 	bool result1, result2;
// 
// 	result1 = (num1 > 0) && (num1 < 5);
// 	result2 = (num2 < 0) || (num2 > 10);
//     
// 	cout << "&& �����ڿ� ���� �ᱣ���� " << result1 << "�Դϴ�." << endl;
// 	cout << "|| �����ڿ� ���� �ᱣ���� " << result2 << "�Դϴ�." << endl;
// 	cout << " !�����ڿ� ���� �ᱣ���� " << !result2 << "�Դϴ�." << endl;

// 	int num1 = 15;
// 	int num2 = 8;
// 
// 	cout << "~ �����ڿ� ���� �ᱣ���� " << (~num1) << "�Դϴ�." << endl;
// 	cout << " << �����ڿ� ���� �ᱣ���� " << (num2 << 2) << "�Դϴ�." << endl;
// 	cout << " >> �����ڿ� ���� �ᱣ���� " << (num2 >> 2) << "�Դϴ�." <<endl;

// 	int num1 = 11;
// 	int num2 = 10;
// 	int result;
// 
// 	result = (num1 < num2) ? num1 : num2;
// 
// 	cout << "�� �� �� �������� " << result << "�Դϴ�." << endl;
	
// int num1 = 15, num2 = 8;
// 
// cout << "ù ��° ���� " << num1 << "�̰�, �� ��° ���� " << num2 << "�Դϴ�.";

// 	cout << " char�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(char) << " ����Ʈ�Դϴ�." << endl;
// 	cout << " short�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(short) << " ����Ʈ�Դϴ�." << endl;
// 	cout << " int�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(int) << " ����Ʈ�Դϴ�." << endl;
// 	cout << " long�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(long) << " ����Ʈ�Դϴ�." << endl;
// 	cout << " longlong�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(long long) << "����Ʈ�Դϴ�." << endl;
// 	cout << " float�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(float) << "����Ʈ�Դϴ�." << endl;
// 	cout << "double�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(double) << "����Ʈ�Դϴ�." << endl;
// 	cout << " long double�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(long double) << "����Ʈ�Դϴ�." << endl;

/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5���� �۽��ϴ�." << endl;
// 	}
// 	if (num == 5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl;
// 	}
// 	if (num > 5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5���� Ů�ϴ�." << endl;
// 	}
*/

/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5���� �۽��ϴ�." << endl;
// 	}
// 	else
// 	{
// 		if(num == 5)
// 		{
// 			cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl;
// 		}
// 		else
// 		{
// 			cout << " �Է��Ͻ� ���� 5���� Ů�ϴ�." << endl;
// 		}
// 	}
*/
/*
// 	int num = 7;
// 	if (num < 5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5���� �۽��ϴ�." << endl;
// 	}
// 	else if (num ==5)
// 	{
// 		cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl;
// 	}
// 	else 
// 	{
// 		cout << "�Է��Ͻ� ���� 5���� Ů�ϴ�." << endl;
// 	}
*/



/*
// while(1)
// {
// 
// int num;
// cout << "���ڸ� �Է����ּ��� : ";
// cin >> num;
// 
// switch (num)
// {
// case 1:
// 	cout << "�Է��Ͻ� ���� 1�Դϴ�." << endl;
// 	break;
// case 2:
// 	cout << "�Է��Ͻ� ���� 2�Դϴ�." << endl;
// 	break;
// case 3:
// 	cout << "�Է��Ͻ� ���� 3�Դϴ�." << endl;
// 	break;
// case 4:
// 	cout << "�Է��Ͻ� ���� 4�Դϴ�." << endl;
// 	break;
// case 5:
// 	cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl;
// 	break;
// default:
// 	cout << "1���� 5������ ���� �Է����ּ���!" << endl;
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
// 	cout << "������ �Է��ϼ��� :";
// 	cin >> ch;
// 	switch (ch)
// 	{
// 	case 'a':
// 	case 'A':
// 		cout << "�� �л��� ������ A�Դϴ�." << endl;
// 		break;
// 	case 'b':
// 	case 'B':
// 		cout << "�� �л��� ������ B�Դϴ�." << endl;
// 		break;
// 	case 'c':
// 	case 'C':
// 		cout << "�� �л��� ������ C�Դϴ�." << endl;
// 		break;
// 	case 'd':
// 	case 'D':
// 		cout << "�� �л��� ������ D�Դϴ�." << endl;
// 		break;
// 	case 'f':
// 	case 'F':
// 		cout << "�� �л��� ������ F�Դϴ�." << endl;
// 		break;
// 	default:
// 		cout << "������ ��Ȯ�� �Է��� �ּ���!(A, B, C, D, F)" << endl;
// 		break;
// 	}
// 	}
*/
		

	int i = 0, num = 5;
	while (i < num)
	{
		cout << "while ���� ����" << i + 1 << " ��° �ݺ� �������Դϴ�." << endl;
		i++;

	}

	cout << "while ���� ����� �� ���� i�� ���� " << i << "�Դϴ�." << endl;

	return 0;
}