// 스텍 구조확인

#include <stdio.h>

void func(int x)
{
	printf("func 함수 x=%3d addr==> %d \n", x, &x);

}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	puts("번지수를 잘 보세요");
	printf("a= %3d addr==> %d \n", a, &a);
	printf("b=%3d addr==>%d \n", b, &b);
	printf("c= %3d addr==> %d \n", c, &c);

	func(a);
	func(b);
	func(c);

	func(100);
	func(200);
	func(300);

	return 0;
}