// 기억류(storage class) static

#include <stdio.h>

void sub(int x)
{
	int ak = 100;
	static int sk = 200;
	printf("sub함수 x= %d, &x=%d \n", x, &x);
	printf("sub함수 ak=%d, &ak=%d \n", ak, &ak);
	printf("sub함수 sk=%d, &sk=%d \n", sk, &sk);
}

int main(void) {
	int a;
	static int b;

	printf("a=%d, &a=%d \n", a, &a);
	printf("b=%d, &b=%d \n", b, &b);

	sub(500);

	return 0;
}