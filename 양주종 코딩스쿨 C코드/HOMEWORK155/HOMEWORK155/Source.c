#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf(" swap �Լ� *x= %d, *y=%d \n", *x, *y);

	return x, y;
}

int main(void)
{
	int a = 100, b = 300;

	swap(&a, &b);

	printf("main �Լ� a=%d, b=%d \n", a, b);
	puts(" main �Լ������� �ٲ����");

	return 0;
}