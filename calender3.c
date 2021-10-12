/*#include <stdio.h.>

int base_year = 1980;
int base_month = 1;

unsigned int total_sum = 0;

int month_table[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int nYear=-1;
int nMonth=-1;

int is_leap_year(int n)
{

	if ( n% 4 == 0 ){
		if (n % 100 == 0 )
		{
			if ( n % 400 == 0 )
				return 1;
			return 0;
		}
		return 1;
	}
	else
		return 0;
}

int total_to_month(int total)
{
	int i=0;
	int cnt=0;
	int chk_leap_year = base_year;

	while (1)
	{
		if ( is_leap_year(chk_leap_year) == 1)
			month_table[1] = 29;

		if ( total >= month_table[i] )
		{
			total-= month_table[i++];
			cnt++;
			if (i==12)
			{
				i-=12;
				chk_leap_year++;
			}
			month_table[1]= 28;
		}
		else break;
	}
	cnt%=12;
	return (cnt+1);
}

int count_leap(int n)
{
	int i;
	int  cnt=0;

	if ( n <= 0 )
	{
		for (i=base_year ; i < (base_year-n) ; i++)
		{
			if ( is_leap_year(i) == 1 )
			{
				cnt++;
			}
		}
	}
	return cnt;
}

void result(int dy, int mth)
{
	int i,j;
	int d=0;
	int year=0;
	int month;
	int sum=0;
	int day;

	if ( nYear >= base_year)
	{
		if ( is_leap_year(nYear) == 1)
						month_table[1] = 29;
		for ( i =0; i < (mth - base_month ) ; i++)
						total_sum += month_table[i];
		day = (total_sum+2) % 7;
		printf("총일수 %d\n",total_sum);
		month = total_to_month(total_sum);
		printf("%d월의 달력\n", nMonth);
		printf("일      월      화      수      목      금      토\n");
		for ( i = 0; i < day; i++)
				printf("\t");
		for ( j = 1 ; j <= month_table[month-1]; j++)
		{
				printf("%2d\t",j);
				if (((j+day) % 7) == 0 ) printf("\n");
		}
		printf("\n");
		month_table[1] = 28;
						
	}
}

void main()
{
		int n;

		while (nYear){


			puts("Year? Month?");
			scanf("%d %d",&nYear,&nMonth);
			total_sum = (( nYear - base_year) * 365)+count_leap((base_year-nYear));
			
			n =		count_leap(base_year-nYear);

			printf("윤달의 개수 %d\n",n);
			result(n,nMonth);
		 
		}
}*/