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
// 	cout << " �迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� :" << arr[0] << "," << arr[1] << "," << arr[2] << endl;
// 	cout << " �迭�� �̸����� ������ ������ �� �迭��ҿ� ���� :" << *(arr+0) << "," << *(arr+1) << "," << *(arr+2);
	
// 	const int SIZE = 20;
// 	char address[SIZE];
// 	char name[SIZE];

// 	string address, name;
// 
// 	cout << "�ڽ��� �̸��� �����ּ��� :";
// 	//cin.get(name,SIZE).ignore(SIZE,'\n');
// 	//cin.get(name,SIZE).get();
// 	//cin >> name;
// 	getline(cin,name);
// 
// 	cout << "�ڽ��� ��� �ִ� ���ø� �����ּ��� :";
// 	//cin >> address;
// 	//cin.get(address,SIZE).get();
// 	//cin.get(address,SIZE).ignore(SIZE,'\n');
// 	getline(cin,address);
// 
// 	cout << address << "�� ��� �ִ�" << name << "��~ �����մϴ�!";
	
// 	string dog;
// 	cout << "���� dog ������ ���̴� " << dog.length() <<"�Դϴ�." << endl;
// 
// 	dog = "Navi";
// 	cout << dog << "���� �̻� �̸��̳׿� !" << endl;
// 
// 	cout << "���� dog ������ ���̴� " << dog.length() <<"�Դϴ�." << endl;
// 	cout << "������ �̸��� ù ���ڴ� �ٷ�" << dog[0]<< "�Դϴ�.";

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

	cout << "���ڿ� str1�� ���̴� " << str1.length() << "�Դϴ�." << endl;
	cout << "���ڿ� str2�� ���̴� " << str2.size() << "�Դϴ�." << endl;
* /

/ *
	string str1,str2,str3;

	str1.append("C++ Programming");       //���ڿ��� �ǳ��� �߰���
	str2.append("C++ Programming", 4, 7); //�߰��� ���ڿ��� ������ġ���� ������ŭ�� ���� �߰�	
	str3.append(4, 'X');				// �߰��� ���ڸ� ������ŭ �� ���� �߰� 

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3; * /
	
/ *
	string str = "C++ Programming";

	cout << str.find("Pro") << endl;
	cout << str.find('r') << endl;

	if(str.find("Pro", 5)!=string::npos)
	{
		cout << "�ش� ���ڿ��� ã�ҽ��ϴ�";
	}
	
	else
	{
		cout << "�ش� ���ڿ��� ã�� ���߽��ϴ�";
	}
* /

/ *
	string str1 = "ABC";
	string str2 = "ABC";

	if(str1.compare(str2) == 0)
	{
		cout << str1 << "��" << str2 << "�� �����ϴ�.";

	}
	else if(str1.compare(str2) < 0)
	{
		cout << str1 << "��" << str2 << "���� ���� ���� ������ �տ� �ֽ��ϴ�";
	}
	else
	{
		cout << str1 << "��" << str2 << "���� ���� ���� ������ �ڿ� �ֽ��ϴ�";
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

	cout << " ���ڿ� str�� length�� " << str.length() << "�Դϴ�." << endl;
	cout << " ���ڿ� str�� capacity�� " << str.capacity() << "�Դϴ�." << endl;
	cout << " ���ڿ� str�� max_size�� " << str.max_size() << "�Դϴ�.";
* /

/ *
	book web_book = {"HTML�� CSS", "ȫ�浿", 28000};
	book java_book = {"Java language", "�̼���"};

	cout << "ù��° å�� ������ " << web_book.title << "�̰�, ���ڴ� " << web_book.author
		 << "�̸�, ������ " << web_book.price << "�� �Դϴ�." << endl;
	cout << "�ι�° å�� ������ " << java_book.title << "�̰�, ���ڴ� " << java_book.author
		<< "�̸�, ������ " << java_book.price << "�� �Դϴ�." << endl;
* /
	Prop hong;
	int hong_prop;
	
	hong = InitProperty();
	
	hong_prop = CalcProperty(&hong); // ����ü�� �ּҸ� �Լ��� �μ��� ������.
	
	cout << "ȫ�浿�� ����� ����" << hong.savings << "���� ����" << hong.loan << "���� ������ ��" << hong_prop << "�� �Դϴ�.";


	
	
		


	return 0;
}

Prop InitProperty(void)
{
	Prop hong_prop = {100000000,40000000};
	return hong_prop; // ����ü�� �Լ��� ��ȯ������ ��ȯ��.
}
int CalcProperty(const Prop* money) // const Ű���带 ����Ͽ� ����ü�� �����͸� ���� �����ϴ� ���� ������.
{
	//money ->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
	return (money->savings - money->loan);
}*/