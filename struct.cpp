#include <stdio.h>


struct GameInfo {

	char * name;
	int year;
	int price;
	char * company;
};

int main_strcut(void)
{
	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017
	// 가격 : 50원
	// 제작사 : 나도회사
	

	char * name = "나도게임";
	int year = 2017;
	int price = 50;
	char * company = "나도회사";

	//[또다른 게임 출시]
	// 이름 : 너도게임
	// 발매년도 : 2017
	// 가격 : 100
	// 제작사 : 너도회사


	char * name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char * company2 = "너도회사";

	//구조체사용
	struct GameInfo gameinfo1;
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "나도회사";

	// 구조체 출력
	printf("-- 게임 출시 정보 -- \n");
	printf("  게임명   : %s\n", gameinfo1.name);
	printf("  발매년도 : %d\n", gameinfo1.year);
	printf("  가격     : %d\n", gameinfo1.price);
	printf("  제작사   : %s\n", gameinfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameinfo2 = {"너도게임",2017,100,"너도회사"};
	printf("-- 또다른 게임 출시 정보 -- \n");
	printf("  게임명   : %s\n", gameinfo2.name);
	printf("  발매년도 : %d\n", gameinfo2.year);
	printf("  가격     : %d\n", gameinfo2.price);
	printf("  제작사   : %s\n", gameinfo2.company);

	// 구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도게임",2017,50,"나도회사"} ,
		{"너도게임",2017,100,"너도회사"}

	};
	
	// 구조체 포인터
	struct GameInfo * gamePtr; // 미션맨
	gamePtr = &gameinfo1;
	printf("\n\n-- 미션맨의 게임 출시 정보 -- \n");
/*
	printf("  게임명   : %s\n", (*gamePtr).name); // *ptr 
	printf("  발매년도 : %d\n", (*gamePtr).year);
	printf("  가격     : %d\n", (*gamePtr).price);
	printf("  제작사   : %s\n", (*gamePtr).company);
*/
	printf("  게임명   : %s\n", gamePtr -> name); // *ptr 
	printf("  발매년도 : %d\n", gamePtr -> year);
	printf("  가격     : %d\n", gamePtr->price);
	printf("  제작사   : %s\n", gamePtr->company);

	return 0;
}