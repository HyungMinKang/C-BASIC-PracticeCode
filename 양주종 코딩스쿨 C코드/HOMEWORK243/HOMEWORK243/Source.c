// 함수의 인수, 매개변수

#include <stdio.h>

void func(int x)
{
	printf("x= %d, &x=%d \n", x, &x);
}

int main(void)
{
	int a = 100;

	puts(" \n 함수의 인수(argument), 매개변수(parameter) \n");

	printf("a=%d, &a=%d \n\n", a, &a);

	func(a);

	return 0;
}