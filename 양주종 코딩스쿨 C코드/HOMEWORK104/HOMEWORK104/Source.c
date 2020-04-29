//제어문과 연산자 for문 기초

#include<stdio.h>

int main(void)
{
	int i, sum = 0;
	puts("--------------------");
	puts(" *for문 기초");
	puts(" ---------------------");

	for (i = 0; i <= 10; i++)
	{
		sum += i;
		printf(" i=%2d, sum=%2d, \n", i, sum);
	}

	puts("-----------------------------------");
	puts(" 변수 i가 1~10까지 10번 반복");
	puts("------------------------------------");

	return 0;
}