// ū ������ ó��

#include<stdio.h>

int main(void)
{
	unsigned int a = 4300000000;
	__int64 b = 100000000000000;

	puts("---------------------");
	puts("* ū ������ ó��*");
	puts("---------------------");

	printf("a= %d \n", a);
	printf("b= %I64d \n", b);
	puts("---------------------");

	puts("intsms -21�� ~ 21��");
	puts("unsigned int�� 42.9��");
	puts("__int64�� 2^64���� ���尡��");
	puts("%I64d�� 2^64���� ǥ������");
	puts("---------------------");

	return 0; 
}