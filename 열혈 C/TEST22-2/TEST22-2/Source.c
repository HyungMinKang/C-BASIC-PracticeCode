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
		printf("직원이름: "); scanf("%s", employee[i].name);
		printf("주민번호: "); scanf("%s", employee[i].identifyNum);
		printf("급여정보: "); scanf_s("%d", &(employee[i].pay));
		printf("\n");
	}
	
	printf("-------직원정보 출력-------- \n");
	for (i = 0; i < 3; i++)
	{
	
	printf("직원이름: %s \n", employee[i].name);
	printf("주민번호: %s \n", employee[i].identifyNum);
	printf("급여정보: %d \n", employee[i].pay);
	printf("\n");
	}
	return 0;
}