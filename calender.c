// #include<stdio.h>
// 
// //2020�� �޷� ���α׷�
// 
// int main(void) 
// 
// { 
// 	int day = 1;//���� 
// 	int year = 2020;//�⵵ 
// 	int date;//��¥ 
// 	int month;//�� 
// 	int month_date;//�ش� ���� �������� 
// 	int year_check = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);//����üũ 
// 	int n;//������ �� 
// 
// 	puts("---- 2020�� ----"); 
// 	puts(""); 
// 	puts(""); 
// 
// 	for (month = 1; month < 13; month++) 
// 	{ 
// 		printf("------ %d�� ------\n", month); 
// 
// 
// 		//�ش� ���� �������� ��� 
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
// 		puts("�Ͽ�ȭ�������"); 
// 		puts("=============="); 
// 
// 		//1�� �޷� 
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
// 		//�ٸ��� �޷� 
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