#include "stdio.h"
#include "stdlib.h"
#include "time.h"
/*#include "iostream"*/
// ����Ⱑ 6���� �ִ�.
// �̵��� ���׿� ��� �ִµ�, �縷�̿���
// �縷�� �ʹ� ������, �ʹ� �����ؼ� ���� ���� ���� �����ؿ�.
// ���� �� �����ϱ����� �������� ���׿� ���� �༭ ����⸦ ����ּ���
// ������ �ð��� �������� ���� Ŀ���� ���߿��� �ȳ�

int level = 1;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();


int main_pointer_project(void)
{
	long startTime = 0;				// ���� ���� �ð�
	long totalElapsedTime = 0;		// �� ��� �ð�
	long preElapesedTime = 0;		// ���� ��� �ð� (�ֱ� �� �� �ð� ����)

	int num=0;						// �� �� ���׿� ���� �� ������, ����� �Է�
	initData();

	cursor = arrayFish; // cursor[0], cursor[1] ...

	startTime = clock(); // ���� �ð��� millisecond(1000����1��) ������ ��ȯ
	while(1)
	{	

		printFishes();
		printf(" �� �� ���׿� ���� �ֽðھ��?");
		scanf_s("%d", &num);

		// �Է°� üũ
		if ((num<1)||(num>6))
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
			
		}
		
		// �� ��� �ð�
		totalElapsedTime = (clock()-startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld �� \n", totalElapsedTime);
		
		// ���� �� �� �ð� ( ���������� �� �ؽð�) ���ķ� �帥 �ð�
		preElapesedTime = totalElapsedTime-preElapesedTime;
		printf("�ֱ� ��� �ð� : %ld �� \n", preElapesedTime);

		// ������ ���� ����(����)
		decreaseWater(preElapesedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0 �̸�? ���� ���� �ʴ´�... �̹� ��Ⱑ...
		if(cursor[num-1]<=0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� ���� �ʽ��ϴ�.\n", num);
		}
		//2. ������ ���� 0�� �ƴѰ��? ���� �ش�! 100�� ���� �ʴ��� üũ
		//���� ������ �� +1 <= 100
		else if (cursor[num-1]+1<=100)
		{
			//���� �ش�
			printf("%d �� ���׿� ���� �ݴϴ�\n\n", num);
			cursor[num-1]+=5; // cursor[num-1] = cursor [num-1] +1
		}
		// �������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)
		if(totalElapsedTime/20 >level-1)
		{
			if(checkFishAlive()==1)
			{//������
			level++; // level : 1 -> 2
			printf(" *** �� ������ ! ���� %d �������� %d ������ ���׷��̵� *** \n\n", level-1, level);
			}
			if(level == 5)
			{
				printf("\n\n�����մϴ�. �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�");
				exit(0);
			}
		}
		
		// ��� ����Ⱑ �׾����� Ȯ��
		if(checkFishAlive()==0)
		{
			// ����� ��� ����
			printf("��� ����Ⱑ.. ����..\n\n");
			exit(0);
		}
		else
		{
			// �ּ� �Ѹ��� ����
			printf("����Ⱑ ���� ��� �־��!\n");
		}
		preElapesedTime=totalElapsedTime;

		// 10�� -> 15�� (5�� preElapesedTime -> 15��) -> 25��
	}
	return 0;
}

void initData()
{
	level=1; // ���� ���� (1~5)
	for (int i=0;i<6;i++)
	{
		arrayFish[i]=100; // ������ �� ���� (0~100)

	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1,2,3,4,5,6);
	for (int i=0;i<6;i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i=0;i<6;i++)
	{
		arrayFish[i]-=(level*3*(int)elapsedTime); // ���̵� ������ ���� ��
		if(arrayFish[i]<0)
		{
			arrayFish[i]=0;
		}
	}
}

int checkFishAlive()
{
	for(int i=0;i<6;i++)
	{
		if(arrayFish[i]>0)
			return 1; // �� TURE
	}
	return 0;

}