#include <stdio.h>


struct GameInfo {

	char * name;
	int year;
	int price;
	char * company;
};

int main_strcut(void)
{
	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017
	// ���� : 50��
	// ���ۻ� : ����ȸ��
	

	char * name = "��������";
	int year = 2017;
	int price = 50;
	char * company = "����ȸ��";

	//[�Ǵٸ� ���� ���]
	// �̸� : �ʵ�����
	// �߸ų⵵ : 2017
	// ���� : 100
	// ���ۻ� : �ʵ�ȸ��


	char * name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char * company2 = "�ʵ�ȸ��";

	//����ü���
	struct GameInfo gameinfo1;
	gameinfo1.name = "��������";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "����ȸ��";

	// ����ü ���
	printf("-- ���� ��� ���� -- \n");
	printf("  ���Ӹ�   : %s\n", gameinfo1.name);
	printf("  �߸ų⵵ : %d\n", gameinfo1.year);
	printf("  ����     : %d\n", gameinfo1.price);
	printf("  ���ۻ�   : %s\n", gameinfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameinfo2 = {"�ʵ�����",2017,100,"�ʵ�ȸ��"};
	printf("-- �Ǵٸ� ���� ��� ���� -- \n");
	printf("  ���Ӹ�   : %s\n", gameinfo2.name);
	printf("  �߸ų⵵ : %d\n", gameinfo2.year);
	printf("  ����     : %d\n", gameinfo2.price);
	printf("  ���ۻ�   : %s\n", gameinfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������",2017,50,"����ȸ��"} ,
		{"�ʵ�����",2017,100,"�ʵ�ȸ��"}

	};
	
	// ����ü ������
	struct GameInfo * gamePtr; // �̼Ǹ�
	gamePtr = &gameinfo1;
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� -- \n");
/*
	printf("  ���Ӹ�   : %s\n", (*gamePtr).name); // *ptr 
	printf("  �߸ų⵵ : %d\n", (*gamePtr).year);
	printf("  ����     : %d\n", (*gamePtr).price);
	printf("  ���ۻ�   : %s\n", (*gamePtr).company);
*/
	printf("  ���Ӹ�   : %s\n", gamePtr -> name); // *ptr 
	printf("  �߸ų⵵ : %d\n", gamePtr -> year);
	printf("  ����     : %d\n", gamePtr->price);
	printf("  ���ۻ�   : %s\n", gamePtr->company);

	return 0;
}