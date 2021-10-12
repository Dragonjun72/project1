// #include<stdio.h>
// 
// //2020년 달력 프로그램
// 
// int main(void) 
// 
// { 
// 	int day = 1;//요일 
// 	int year = 2020;//년도 
// 	int date;//날짜 
// 	int month;//달 
// 	int month_date;//해당 달의 마지막날 
// 	int year_check = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);//윤년체크 
// 	int n;//여분의 값 
// 
// 	puts("---- 2020년 ----"); 
// 	puts(""); 
// 	puts(""); 
// 
// 	for (month = 1; month < 13; month++) 
// 	{ 
// 		printf("------ %d월 ------\n", month); 
// 
// 
// 		//해당 달의 마지막날 계산 
// 		switch (month) 
// 		{ 
// 		case 2: 
// 			if (year_check == 1) 
// 				month_date = 29; 
// 			else 
// 				month_date = 28; 
// 			break; 
// 		case 4: 
// 		case 6: 
// 		case 9: 
// 		case 11: 
// 			month_date = 30; 
// 			break; 
// 		default: 
// 			month_date = 31; 
// 			break; 
// 		} 
// 
// 		puts("=============="); 
// 		puts("일월화수목금토"); 
// 		puts("=============="); 
// 
// 		//1월 달력 
// 		if (month == 1) 
// 		{ 
// 			for (day = 0; day < 3; day++) 
// 				printf("  "); 
// 			for (date = 1; date <= month_date; date++) 
// 			{ 
// 				printf("%2d", date); 
// 				day++; 
// 
// 				if (day == 7) 
// 				{ 
// 					puts(""); 
// 					day = 0; 
// 				} 
// 			} 
// 			puts(""); 
// 			n = day; 
// 		} 
// 
// 		//다른달 달력 
// 		else 
// 		{ 
// 			for (day = 0; day < n; day++) 
// 				printf("  "); 
// 			for (date = 1; date <= month_date; date++) 
// 			{ 
// 				printf("%2d", date); 
// 				day++; 
// 
// 				if (day == 7) 
// 				{ 
// 					puts(""); 
// 					day = 0; 
// 				} 
// 			} 
// 			puts(""); 
// 			n = day; 
// 		} 
// 	} 
// 
// 	return 0; 
// 
// }