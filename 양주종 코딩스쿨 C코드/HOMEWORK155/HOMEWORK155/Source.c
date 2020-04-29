#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf(" swap 함수 *x= %d, *y=%d \n", *x, *y);

	return x, y;
}

int main(void)
{
	int a = 100, b = 300;

	swap(&a, &b);

	printf("main 함수 a=%d, b=%d \n", a, b);
	puts(" main 함수에서도 바뀌었다");

	return 0;
}