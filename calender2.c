// #include <stdio.h>
// 
// int year;
// int month;
// 
// printf("�޷��� ����� �⵵�� ���� �Է��ϼ���.\n");
// 
// scanf_s("%d%d",&year, &month);
// 
// 
// int totalday;
// 
// int year_1;
// 
// year_1 = year-1;
// 
// totalday = year_1*365 + year_1/4 - year_1/100 + year_1/400;
// 
// int daysofmonth[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 
// if(!(year%4)&&(year%100)||!(year%400))
// {
// 	daysofmonth[1]=29;
// }
// 
// for(i=0; i<month-1; i++)
// {
// 	totalday+=daysofmonth[i];
// }
// 
// totalday++;
// 
// int adayofweek;
// adayofweek= totalday%7;
// 
// printf("\n\n    %4d�� %2d��\n\n",year, month);
// printf(" �� �� ȭ �� �� �� ��\n");
// for (i=0; i<adayofweek; i++)
// {
// 	printf("    ")
// }
// for(i=1; i<=daysofmonth[month-1]; i++)
// {
// 	print("%3d",i);
// 	if(!((i+adayofweek)%7))
// 		printf("\n");
// }
// printf("\n\n");