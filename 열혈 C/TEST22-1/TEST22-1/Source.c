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
	printf("직원이름: "); scanf("%s", employee.name);
	printf("주민번호: "); scanf("%s", employee.identifyNum);
	printf("급여정보: "); scanf_s("%d", &(employee.pay));

	printf("직원이름: %s \n", employee.name);
	printf("주민번호: %s \n", employee.identifyNum);
	printf("급여정보: %d \n", employee.pay);
	return 0;
}