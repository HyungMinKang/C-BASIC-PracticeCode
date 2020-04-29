// 제어문과 연산자- do~while문

#include <stdio.h>

int main(void)
{
	
	int i = 1, sum = 0;
	puts("-------------------");
	puts(" *do~while문* ");
	puts("--------------------");

	do {
		sum += i;
		printf(" i=%2d, sum=%2d \n", i, sum);
		i++;
	} while (i <= 10);

	puts("----------------------------------");
	puts(" 일단 한번은 실행한다");
	puts(" do~while 문은 조건으 나중에 체크");
	puts("-----------------------------");

	return 0;
}