// 변수의 생명주기

int gg = 1000;
#include <stdio.h>

void fun(int a)
{
	int x = a;
	int y = a;

	printf("x=%d, &x=%d \n", x, &x);
	printf("y=%d , &y=%d \n", y, &y);
}

int main(void)
{
	puts("\n 변수의 생명주기 \n");

	fun(10);
	fun(20);
	fun(30);

	printf(" 전역변수 gg=%d, &gg=%d \n\n", gg, &gg);

	return 0;
}