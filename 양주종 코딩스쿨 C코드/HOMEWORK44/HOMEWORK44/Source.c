// byte의 크기2 

#include<stdio.h>

int main(void)
{
	int i, base_number, index_number;
	__int64 res = 1;

	puts("---------------------");
	puts(" *바이트의 크기 *");
	puts("---------------------");

	printf(" 밑수를 입력하세요: ");
	scanf_s("%d", &base_number);

	printf("지수를 입력하세요: ");
	scanf_s("%d", &index_number);

	for (i = 0; i < index_number; i++)
		res *= base_number;

	puts("---------------------");
	printf(" %d^%d= %I64d \n", base_number, index_number, res);
	puts("---------------------");

	puts("2^10 은 1K byte");
	puts("2^20 은 1M byte");
	puts("2^30 은 1G byte");
	puts("2^40 은 1T byte");
	puts("---------------------");
	puts("프로그램 실행해서 값을 따라 적어보세요");
	puts("---------------------");

	return 0;
}