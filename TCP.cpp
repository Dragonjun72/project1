/*
// #include "iostream"
//#include "string"
// using namespace std;


// struct book
// {
// 	string title;
// 	string author;
// 	int price;
// 
// };
struct Prop
{
	int savings;
	int loan;
};
Prop InitProperty(void);

int CalcProperty(const Prop*);

// int CalcProperty(int,int);

int main_TCP(void)
{
// 	int arr[3] = {10, 20, 30};
// 
// 	cout << " 배열의 이름을 이용하여 배열 요소에 접근 :" << arr[0] << "," << arr[1] << "," << arr[2] << endl;
// 	cout << " 배열의 이름으로 포인터 연산을 해 배열요소에 접근 :" << *(arr+0) << "," << *(arr+1) << "," << *(arr+2);
	
// 	const int SIZE = 20;
// 	char address[SIZE];
// 	char name[SIZE];

// 	string address, name;
// 
// 	cout << "자신의 이름을 적어주세요 :";
// 	//cin.get(name,SIZE).ignore(SIZE,'\n');
// 	//cin.get(name,SIZE).get();
// 	//cin >> name;
// 	getline(cin,name);
// 
// 	cout << "자신이 살고 있는 도시를 적어주세요 :";
// 	//cin >> address;
// 	//cin.get(address,SIZE).get();
// 	//cin.get(address,SIZE).ignore(SIZE,'\n');
// 	getline(cin,address);
// 
// 	cout << address << "에 살고 있는" << name << "님~ 감사합니다!";
	
// 	string dog;
// 	cout << "현재 dog 변수의 길이는 " << dog.length() <<"입니다." << endl;
// 
// 	dog = "Navi";
// 	cout << dog << "정말 이쁜 이름이네요 !" << endl;
// 
// 	cout << "현재 dog 변수의 길이는 " << dog.length() <<"입니다." << endl;
// 	cout << "강아지 이름의 첫 글자는 바로" << dog[0]<< "입니다.";

// 	string str1 = "C++ is Cool!";
// 	string str2;
// 	
// 	str2 = str1;
// 	cout << str2;

// 	string str1 = "C++ is";
// 	string str2 = "Cool! and funny!";
// 	string str3;
// 
// 	str3 = str1 + str2;
// 	cout << str3 << endl;
// 
// 	str1 +=str2;
// 
// 	cout << str1;

/ *
	string str1;
	string str2 = "C++ Programming";

	cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << endl;
	cout << "문자열 str2의 길이는 " << str2.size() << "입니다." << endl;
* /

/ *
	string str1,str2,str3;

	str1.append("C++ Programming");       //문자열을 맨끝에 추가함
	str2.append("C++ Programming", 4, 7); //추가할 문자열의 시작위치부터 개수만큼만 끝에 추가	
	str3.append(4, 'X');				// 추가할 문자를 개수만큼 맨 끝에 추가 

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3; * /
	
/ *
	string str = "C++ Programming";

	cout << str.find("Pro") << endl;
	cout << str.find('r') << endl;

	if(str.find("Pro", 5)!=string::npos)
	{
		cout << "해당 문자열을 찾았습니다";
	}
	
	else
	{
		cout << "해당 문자열을 찾지 못했습니다";
	}
* /

/ *
	string str1 = "ABC";
	string str2 = "ABC";

	if(str1.compare(str2) == 0)
	{
		cout << str1 << "가" << str2 << "와 같습니다.";

	}
	else if(str1.compare(str2) < 0)
	{
		cout << str1 << "가" << str2 << "보다 사전 편찬 순으로 앞에 있습니다";
	}
	else
	{
		cout << str1 << "가" << str2 << "보다 사전 편찬 순으로 뒤에 있습니다";
	}
* /

/ *
	string str1 = "C++ is very nice!";
	string str2 = "nice";
	string str3 = "awesome";

	string::size_type index = str1.find(str2);
	if(index!= string::npos)
	{
		str1.replace(index,str2.length(), str3);
	}

	cout << str1;
* /


/ *
	string str = "C++ Programming";

	cout << " 문자열 str의 length는 " << str.length() << "입니다." << endl;
	cout << " 문자열 str의 capacity는 " << str.capacity() << "입니다." << endl;
	cout << " 문자열 str의 max_size는 " << str.max_size() << "입니다.";
* /

/ *
	book web_book = {"HTML과 CSS", "홍길동", 28000};
	book java_book = {"Java language", "이순신"};

	cout << "첫번째 책의 제목은 " << web_book.title << "이고, 저자는 " << web_book.author
		 << "이며, 가격은 " << web_book.price << "원 입니다." << endl;
	cout << "두번째 책의 제목은 " << java_book.title << "이고, 저자는 " << java_book.author
		<< "이며, 가격은 " << java_book.price << "원 입니다." << endl;
* /
	Prop hong;
	int hong_prop;
	
	hong = InitProperty();
	
	hong_prop = CalcProperty(&hong); // 구조체의 주소를 함수의 인수로 전달함.
	
	cout << "홍길동의 재산은 적금" << hong.savings << "원에 대출" << hong.loan << "원을 제외한 총" << hong_prop << "원 입니다.";


	
	
		


	return 0;
}

Prop InitProperty(void)
{
	Prop hong_prop = {100000000,40000000};
	return hong_prop; // 구조체를 함수의 반환값으로 반환함.
}
int CalcProperty(const Prop* money) // const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지함.
{
	//money ->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
	return (money->savings - money->loan);
}*/