#include <iostream>
#include "string"
using namespace std;

struct Name
{
	string first;
	string last;
};

struct Friends
{
	Name first_name;
	string address;
	string job;
};

union ShareData
{
	unsigned char a;
	unsigned short b;
	unsigned int c;

};

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main_struct2(void)
{
	int input;
	Weather wt;

	cout << "���� ������ �Է��� �ּ��� :" << endl;
	cout << "(SUNNY=0,CLOUD=10,RAIN=20, SNOW=30" << endl;
	cin >> input;
	wt=(Weather)input;

	switch (wt)
	{
		case SUNNY:
			cout << "������ ������ ���� ���ƿ�!";
			break;
		case CLOUD:
			cout << "������ ������ �帮�׿�!";
			break;
		case RAIN:
			cout << "������ ������ �� �ָ��ָ� ���׿�!";
			break;
		case SNOW:
			cout << " ������ ������ �Ͼ� ���� �� ������!";
			break;
		default:
			cout << "��Ȯ�� ������� �Է����ּ���!";
			break;

	}

	cout << endl << "����ü Weather�� �� ������� " << SUNNY <<"," << CLOUD << "," << RAIN << "," << SNOW << "�Դϴ�.";
/*
	Friends hong =
	{
		{"�浿", "ȫ"},
		"����� ������ ���ﵿ",
		"�л�"
	};


cout << hong.address << endl << endl;
cout << hong.first_name.last << hong.first_name.first << "����," << endl;
cout << "�׵��� �� �ϳ´�? ������ " << hong.job << "�̴�?" << endl;
cout << " ������ �� �ѹ� ����." << endl << "�� ����.";
*/


/*
	ShareData var;
	var.c = 0x12345678;

	cout << hex;
	cout << var.a <<endl;
	cout << var.b << endl;
	cout << var.c;
*/

	return 0;


};


/*
#include <iostream>
using namespace std;

// first ���ӽ����̽� ����
namespace first
{
	int value = 1;
}

// second ���ӽ����̽� ����
namespace second
{
	int value = 2;
}

int main()
{
	cout << first::value; // 1�� ���
	cout << second::value; // 2�� ���
}*/