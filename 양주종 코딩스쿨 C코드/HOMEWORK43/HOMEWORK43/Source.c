// byte의 크기 1

#include<stdio.h>

int main(void)
{
	int i, base_number, index_number, res = 1;

	puts("---------------------");
	puts(" *바이트의 크기*");
	puts("---------------------");

	printf("밑수를 입력하세요: ");
	scanf_s("%d", &base_number);

	printf("지수를 입력하세요:");
	scanf_s("%d", &index_number);

	for (i = 0; i < index_number; i++)
		res *= base_number;
	
	puts("---------------------");
	printf(" %d^ %d = %u \n", base_number, index_number, res);
	puts("---------------------");

	puts("2^8 은 1byte");
	puts("2^16은 2byte");
	puts("2^24은 3byte");
	puts("2^32는 4byte");
	puts("---------------------");
	puts("프로그램 실행해서 값을 따라 적어보세요");
	puts("---------------------");

	return 0;
}