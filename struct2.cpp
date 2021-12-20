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

	cout << "오늘 날씨를 입력해 주세요 :" << endl;
	cout << "(SUNNY=0,CLOUD=10,RAIN=20, SNOW=30" << endl;
	cin >> input;
	wt=(Weather)input;

	switch (wt)
	{
		case SUNNY:
			cout << "오늘의 날씨는 아주 맑아요!";
			break;
		case CLOUD:
			cout << "오늘의 날씨는 흐리네요!";
			break;
		case RAIN:
			cout << "오늘의 날씨는 비가 주륵주륵 오네요!";
			break;
		case SNOW:
			cout << " 오늘의 날씨는 하얀 눈이 ㄴ ㅐ려요!";
			break;
		default:
			cout << "정확한 상숫값을 입력해주세요!";
			break;

	}

	cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY <<"," << CLOUD << "," << RAIN << "," << SNOW << "입니다.";
/*
	Friends hong =
	{
		{"길동", "홍"},
		"서울시 강남구 역삼동",
		"학생"
	};


cout << hong.address << endl << endl;
cout << hong.first_name.last << hong.first_name.first << "에게," << endl;
cout << "그동안 잘 니냈니? 아직도 " << hong.job << "이니?" << endl;
cout << " 다음에 꼭 한번 보자." << endl << "잘 지내.";
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

// first 네임스페이스 정의
namespace first
{
	int value = 1;
}

// second 네임스페이스 정의
namespace second
{
	int value = 2;
}

int main()
{
	cout << first::value; // 1을 출력
	cout << second::value; // 2를 출력
}*/