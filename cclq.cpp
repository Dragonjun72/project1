#pragma warning(disable: 4996)
#include "stdio.h"

int main(void)
{
 /*	int n,i,j;
	int num,blank = 0;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d", &num);	

	for( i=0; i<num; i++)
	{
		for( j=0; j<num-i-1; j++)
		{
			printf(" ");
		}


		for( j=0; j<=i*2; j++)
		{
			
			printf("*");
		}


		printf("\n");

	
	}*/

/*

	int i,j,k;
	int num,blank = 0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for( i=0; i<num; i++)
	{
		for( j=0; j<i; j++)
		{
			printf(" ");
		}
		for( j=0; j<num+2-i*2; j++)
		{
			printf("*");
		}
	
		printf("\n");
	}
*/

/*
	int j,k,m,n,o,p=0;
	int sum1=0;
	int sum2=0;
	int sum3=0;

	for( j=0; j<=1000/3; j++)
	{

		k=j*3;
		sum1+=k;

	}
	for( m=0; m<=1000/5; m++)
	{
		n=m*5;
		sum2+=n;
	
	}
	for( o=0; o<=1000/15; o++)
	{
		p=o*15;
		sum3+=p;

	}

	printf("3�� ����� �� : %d, 5�� ����� �� : %d, �ߺ��Ǵ� 15�� ����� �� : %d,  3 �Ǵ� 5�� ����� �� : %d\n", sum1, sum2, sum3, sum1+sum2-sum3);
	



	int i=0;
	int sum=0;

	for(i=1; i<=1000; i++)
	{
		if(i%3==0 || i%5==0)
		{
			sum=sum+i;
		}
	}
	printf("3�� ��� �Ǵ� 5�� ����� �� : %d", sum);*/


/*
	int i;
	int num, sum=1;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		sum=sum*i;

	}
	printf("1���� n������ ����? : %d", sum);
*/

/*
	int a, b, c, count;
	count=0;
	for( a=1; a<2000; a++)
	{
		for( b=1; b<2000; b++)
		{
			for( c=1; c<2000; c++)
			{
				if( a+b+c!=2000)
				{
					continue;
				}

				if(a>b && b>c)
				{
					printf("a=%d b=%d c=%d\n", a, b, c);
					count++;
				}
				
			}
		}
	}
	printf("������ ��� �����ϴ� �ڿ��� a,b,c�� ������? : %d", count);

*/

	
	int num;

	printf("������ �ڿ����� �Է��Ͻÿ� :");
	scanf("%d", &num);

	for(int i=0; i<num; i++)
	{

	}
	



	return 0;
}