// 변수의 생명주기

static int gg = 1000;
#include <stdio.h>

void fun(int a)
{
	auto int x = a;
	static int y;
	y = a;

	printf(" auto x= %d, &x=%d \n", x, &x);
	printf(" static y=%d, &y=%d \n\n", x, &y);
}

int main(void)
{
	puts("\n 변수의 생명주기 \n");
	
	fun(10);
	fun(20);
	fun(30);

	printf("전역변수 gg= %d, &gg=%d \n\n", gg, &gg);

	return 0;
}