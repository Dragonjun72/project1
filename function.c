#include <stdio.h>

//����
void p(int num);

void function_without_return();
int function_with_return();

int main(void)
{
	//function
	//����
// 	int num = 2;
// 	//printf("num�� %d�Դϴ�.\n", num);
// 	p(num);
// 	num+=3;
// 	//printf("num�� %d�Դϴ�.\n", num);
// 	p(num);
// 	num-=1;
// 	//printf("num�� %d�Դϴ�.\n", num);
// 	p(num);
// 	num*=3;
// 	//printf("num�� %d�Դϴ�.\n", num);
// 	p(num);
// 	num/=6;
// 	//printf("num�� %d�Դϴ�.\n", num);
//     p(num);


	//�Լ� ����
	//��ȯ���� ���� �Լ� 
	function_without_return();
	
	//��ȯ���� �ִ� �Լ�
	function_with_return();


	return 0;
}
// ���� 
void p(int num)
{
	printf("num�� %d�Դϴ�.\n",num);
}

//��ȯ�� �Լ��̸�


void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}