//c언어코딩 :: printf 실수 출력

#include<stdio.h>

int main(void)
{

	puts(" *실수 출력 *");
	printf(" %f, %lf, %.2lf \n", 4.23456, 6.56789, 7.77777);

	printf("%%f는 float(4byte) 형태로 출력하라. \n");
	printf("실수의 기본 출력은 소수점이하 6자리 까지\n");
	printf("%%lf는long float(8byte) 형태로 출력\n");
	printf("%%.2lf는 소수점이하 2자리만 출력\n");

	return 0;
}