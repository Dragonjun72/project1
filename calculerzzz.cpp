#include <stdio.h>
int num1, num2;
int main_zzz(void)
{
	num1 = 3;
	num2 = 9;
	int k = 0;
	switch(k)
	{
	case '+' : k = 0; break;
	case '-' : k = 1; break;
	case '*' : k = 2; break;
	case '/' : k = 3; break;
	default: printf("������ �Է����ּ���\n"); break;
	}

	if( k == 0)
	{
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}
	else if( k == 1)
	{
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else if ( k == 2)
	{
		printf("%d x %d = %d\n", num1, num2, num1 * num2);
	}
	else if ( k == 3)
	{
		printf("%d / %d = %d\n", num1, num2, num1/num2);
	}
	else printf("�� �� ���� ���� �Դϴ�.\n");
	return 0;
}