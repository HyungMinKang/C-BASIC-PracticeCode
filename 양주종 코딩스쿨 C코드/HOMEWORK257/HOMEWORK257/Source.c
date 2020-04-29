// CALL BY ADDRESS
#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf("\n swap 함수 *x = %d, *y= %d \n", *x, *y);
}

int main(void)
{
	int a = 20, b = 30;

	puts("\n CALL BY ADDRESS \n");
	printf(" 원래값 a= %d, b=%d \n", a, b);
	swap(&a, &b);

	printf("\n swap 함수 호출후 a=%d b=%d \n", a, b);
	return 0;
}