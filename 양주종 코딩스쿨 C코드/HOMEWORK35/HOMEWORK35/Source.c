// 정수 맞교환

#include <stdio.h>

int main(void)
{
	int a = 33, b = 77;
	int tmp;

	puts("-----------------------");
	puts(" *정수 맞교환 *");
	puts("-----------------------");

	printf(" 원래값 a=%d, b=%d \n", a, b);
	puts("-----------------------");

	tmp = a;
	a = b;
	b = tmp;

	printf("\n 교환후 a=%d, b=%d \n", a, b);
	puts("-----------------------");

	printf("값을 맞교환시 반드시는 빈그릇 필요");
	puts("-----------------------");

	return 0;
}