// 재귀호출

#include <stdio.h>

void func(int x)
{
	printf(" func 함수 x= %3d addr==> %d \n", x, &x);
}

int func2(int x)
{
	if (x == 0)
		return;
	func2(x - 1); 
	puts("\n func2 함수");
	printf(" func 함수 x= %3d addr==> %d \n", x, &x);
}

int main(void)
{
	puts(" 번지수를 잘 보세요");

	func(100);
	func(200);
	func(300);

	func2(3);

	return 0;
}