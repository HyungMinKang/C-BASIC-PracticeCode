// C언어가 기본으로 인식하는 자료형

#include <stdio.h>

int main(void)
{
	puts("------------------------");
	puts(" **C언어가 기본으로 인식하는 자료형 **");
	puts("------------------------");

	printf("'A'= %d byte \n", sizeof('A'));
	puts("------------------------");

	printf(" 50= %d byte \n", sizeof(50));
	puts("------------------------");

	printf(" 3.15= %d byte \n", sizeof(3.15));
	puts("------------------------");

	printf(" \"programming\"= %d byte \n", sizeof("programming"));
	puts("------------------------");

	puts(" A는 정수 65로 변환되어 4byte");
	puts(" 정수는 int, 실수는 double로 인식함");
	puts("------------------------");

	return 0;
}