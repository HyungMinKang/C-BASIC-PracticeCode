// 자료형의 크기

#include<stdio.h>

int main(void)
{
	puts("------------------------");
	puts(" **자료형의 크기 **");
	puts("------------------------");

	printf("char= %d byte \n", sizeof(char));
	puts("------------------------");

	printf("short= %d byte \n", sizeof(short));
	puts("------------------------");

	printf("int= %d byte \n", sizeof(int));
	puts("------------------------");

	printf("long= %d byte \n", sizeof(long));
	puts("------------------------");

	printf("float= %d byte \n", sizeof(long));
	puts("------------------------");

	printf("double= %d byte \n", sizeof(double));
	puts("------------------------");

	puts("C언어가 제공하는 기본자료형은 6개");
	puts("------------------------");

	return 0;
}