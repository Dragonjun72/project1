#include <stdio.h>

//선언
void p(int num);

void function_without_return();
int function_with_return();

int main(void)
{
	//function
	//계산기
// 	int num = 2;
// 	//printf("num은 %d입니다.\n", num);
// 	p(num);
// 	num+=3;
// 	//printf("num은 %d입니다.\n", num);
// 	p(num);
// 	num-=1;
// 	//printf("num은 %d입니다.\n", num);
// 	p(num);
// 	num*=3;
// 	//printf("num은 %d입니다.\n", num);
// 	p(num);
// 	num/=6;
// 	//printf("num은 %d입니다.\n", num);
//     p(num);


	//함수 종류
	//반환값이 없는 함수 
	function_without_return();
	
	//반환값이 있는 함수
	function_with_return();


	return 0;
}
// 정의 
void p(int num)
{
	printf("num은 %d입니다.\n",num);
}

//반환형 함수이름


void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}