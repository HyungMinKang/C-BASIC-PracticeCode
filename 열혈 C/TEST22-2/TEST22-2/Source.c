#include<stdio.h>
#pragma warning(disable: 4996)
struct person {
	char name[20];
	char identifyNum[20];
	int pay;
};

int main(void)
{
	struct person employee[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�����̸�: "); scanf("%s", employee[i].name);
		printf("�ֹι�ȣ: "); scanf("%s", employee[i].identifyNum);
		printf("�޿�����: "); scanf_s("%d", &(employee[i].pay));
		printf("\n");
	}
	
	printf("-------�������� ���-------- \n");
	for (i = 0; i < 3; i++)
	{
	
	printf("�����̸�: %s \n", employee[i].name);
	printf("�ֹι�ȣ: %s \n", employee[i].identifyNum);
	printf("�޿�����: %d \n", employee[i].pay);
	printf("\n");
	}
	return 0;
}