#include<stdio.h>
int main_printfsacnf(void) {
	//printf("helloworld \n");


	/*int input;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input);
	printf("�Է°�:%d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° ��: %d\n", one);
	printf("�ι�° ��: %d\n", two);
	printf("����° ��: %d\n", three);*/

	//������ ��ȸ
	//�̸� ���� ������ Ű ����
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ��kg�̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��cm����?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���˸��� ������?");
	scanf_s("%s", what, sizeof(what));

	//�����������
	printf("\n\n--- ���������� ---\n\n");
	printf("�̸�      :%s\n", name);
	printf("����      :%d\n", age);
	printf("������    :%.2f\n", weight);
	printf("Ű        :%.2lf\n", height);
	printf("����      :%s\n", what);
	return(0);



}