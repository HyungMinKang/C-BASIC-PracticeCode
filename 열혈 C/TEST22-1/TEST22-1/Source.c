#include<stdio.h>
#pragma warning(disable: 4996)
struct person {
	char name[20];
	char identifyNum[20];
	int pay;
};

int main(void)
{
	struct person employee;
	printf("�����̸�: "); scanf("%s", employee.name);
	printf("�ֹι�ȣ: "); scanf("%s", employee.identifyNum);
	printf("�޿�����: "); scanf_s("%d", &(employee.pay));

	printf("�����̸�: %s \n", employee.name);
	printf("�ֹι�ȣ: %s \n", employee.identifyNum);
	printf("�޿�����: %d \n", employee.pay);
	return 0;
}