#pragma warning(disable: 4996)
#include "stdio.h"


int main()
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

	
/*
	int inputNum=0;
	int divNum=2;
	bool flgSoSu=false;

	printf("Input number");
	scanf("%d", &inputNum);
	int rest=inputNum;
	printf("%d=", inputNum);
	while(rest>1)
	{
		while(rest%divNum==0)
		{
			printf("%d", divNum);
			rest=rest/divNum;
			if(rest>1)
			{
				printf("*");
			}
		}
		//Next SoSu
		flgSoSu=false;
		while(!flgSoSu)
		{
			divNum++;
 			flgSoSu=true;
// 			for(int i=2; i<divNum-1;i++)
// 			{
// 				if(divNum%i==0)
// 				{
// 					flgSoSu=false;
// 					break;
// 				}
			}
		}
	}
*/


/*
	int inputNum=0;
	int divNum=2;
	bool SoSu= false;

	printf("Input number :");
	scanf("%d", &inputNum);	
	printf("%d=", inputNum);
	int rest=inputNum;
	while(rest>1)
	{
		while(rest%divNum==0)
		{
			printf("%d", divNum);
			rest=rest/divNum;

			if(rest>1)
			{
				printf("*");
			}
		}

		SoSu=false;
		while(!SoSu)
		{
			divNum++;
			SoSu=true;
		}
	}
*/

/*
	int i;
	float f;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f",&f);
	i= (int)((f-(int)f)*100);

	printf("i=%d\n",i);
*/

	/* ģ���� ��Ź */

/*
	int arr[10];
	int i,ave=0;
	for(i=0;i<10;i++)
	{
		printf(" %d��° �л��� ������?", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i++)
	{
		ave=ave+arr[i];
	}
	ave=ave/10;
	printf("��ü �л��� ��� : %d\n", ave);
	for(i=0;i<10;i++)
	{
		printf("�л� %d:",i+1);
		if(arr[i]>= ave)
			printf("�հ�\n");
		else
			printf("���հ�\n");
	}
*/

	
/*
	int arr[10];
	int i,k, ave=0;
	int j=0;
	int h=0;
	int temp;
	int level[10];
	for(i=0;i<10;i++)
	{
		printf("%d�� �л��� ������? ",i+1);
		scanf("%d", &arr[i]);
		

	}



	for(i=0;i<10;i++)
	{
		ave=ave+arr[i];
	}
	ave=ave/10;
	printf("��ü �л��� ����� : %d \n", ave);
	for(i=0;i<10;i++)
	{
	
		printf("�л� %d : ", i+1);
		if(arr[i]>=ave)
		{
			printf("�հ�\n");
		}
		else
		{
			printf("���հ�\n");
		}
	}

	printf("������ ����\n");
 	for(k=1;k<=10;k++)
 	{
		for(i=0;i<9;i++)
		{
			if(arr[i]<arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				
			}
		}
 	}
	for(i=0;i<10;i++)
	{
		printf("%d�� %d�� �л��� ����:%d\n",i+1,level[i],arr[i]);
	}*/

 


	int index=0;


	printf("�б��� �л��� ��� �ΰ���?");
	scanf("%d", &index);

	//

	int i, j, k, l; // for�� ���Ǻ���
	int students[10];
	for (i = 1; i <= index; i++) {
		printf( "%d �� �л��� ������ �����Դϱ�? : ", i);
		scanf("%d", &students[i-1]);
	}

	printf("\n �Է� ���� ����\n");
	for (i = 1; i <= index; i++) {
		printf("%d �� �л� : %d ��\n", i, students[i-1]);
	}


	int students_ordered[10 * 2];

	for (i = 1; i <= index * 2; i++) {
		students_ordered[i-1] = 0;
	}

	for (i = 1; i <= index; i++) {
		for (j = 1; j <= index * 2; j += 2) {
			if (students[i-1] > students_ordered[j - 1]) {
				for(k = index * 2; k / 2 > (j + 1) / 2 ; k -= 2) {
					students_ordered[k-1] = students_ordered[k-3];
					students_ordered[k-2] = students_ordered[k-4];
				}
				students_ordered[j-1] = students[i-1];
				students_ordered[j] = i;

				break;
			}
		}
	}

	printf("\n ���� ���� ����\n");
	for (i = 1; i <= index * 2; i += 2) {
		printf("%d ��, %d �� �л� : %d ��\n", (i + 1) / 2, students_ordered[i], students_ordered[i-1]);
		printf(" �� ");
		for(l = 1; l <= students_ordered[i-1] / 5; l ++) {
			if (l % 2 == 0) {
				printf("��");
			} else {
				printf("��");
			}
		}
		printf("\n");
	}





	return 0;
}