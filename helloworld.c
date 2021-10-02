#include<stdio.h>
int main_printfsacnf(void) {
	//printf("helloworld \n");


	/*int input;
	printf("값을 입력하세요 :");
	scanf_s("%d", &input);
	printf("입력값:%d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값: %d\n", one);
	printf("두번째 값: %d\n", two);
	printf("세번째 값: %d\n", three);*/

	//범죄자 조회
	//이름 나이 몸무게 키 범죄
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇cm에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("범죄명이 뭐에요?");
	scanf_s("%s", what, sizeof(what));

	//조서내용출력
	printf("\n\n--- 범죄자정보 ---\n\n");
	printf("이름      :%s\n", name);
	printf("나이      :%d\n", age);
	printf("몸무게    :%.2f\n", weight);
	printf("키        :%.2lf\n", height);
	printf("범죄      :%s\n", what);
	return(0);



}