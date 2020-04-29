// 구조체 값 변경

#include <stdio.h>
#include <string.h>
typedef struct Lunch
{
	char menu[20]; // 메뉴
	int price; // 가격
}Lunch;

int main()
{
	Lunch lun1 = { "햄버거", 4000 }, lun2 = { "돈까스", 8000 };
	Lunch tmp;

	puts("-------------------");
	puts(" *구조체 맞교환 * ");
	puts(" ------------------");

	puts(" *** 원 래 값 *** ");
	puts("------------------------------");
	printf(" lun1: %s ==> %d원 \n", lun1.menu, lun1.price);
	printf(" lun2: %s ==> %d원 \n", lun2.menu, lun2.price);
	puts("-------------------- \n");

	tmp = lun1;
	lun1 = lun2;
	lun2 = tmp;

	puts(" *** 교 환 후 *** ");
	puts("------------------------------");
	printf(" lun1: %s ==> %d원 \n", lun1.menu, lun1.price);
	printf(" lun2: %s ==> %d원 \n", lun2.menu, lun2.price);
	puts("-------------------- \n");

	puts("구조체 맞교환은 정수 맞교환과 동일");
	puts("-----------------------------");

	return 0;

}