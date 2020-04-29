// 구조체 배열 초기화
#include <stdio.h>
#include<string.h>
typedef struct Lunch
{
	char menu[20]; // 메뉴
	int price; //가격
}Lunch;

int main(void)
{
	Lunch lun[5] = { {"햄버거", 4000}, {"설렁탕", 7000}, {"비빔밥",6000}, {"돈까스" ,8000},
	{"만두국", 5000} };
	int i, n;
	n = sizeof(lun) / sizeof(Lunch);

	puts("---------------------");
	puts(" *구조체 배열의 초기화 ");
	puts(" ---------------------");

	puts("  ** 메 뉴 판 **");
	puts("-----------------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]번 %s ==> %d원 \n", i + 1, lun[i].menu, lun[i].price);
	puts("----------------------------");

	puts("구조체가 여러개 모이면 구조체 배열");
	puts(" --------------------------------");

	return 0;
}