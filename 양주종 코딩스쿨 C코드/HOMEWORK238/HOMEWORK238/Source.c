//������ �켱������ ������

#include <stdio.h>

int func1(int* x)
{
	printf(" x=%d, *x=%d \n", x, *x);
	return *x++;
}

int func2(int* x)
{
	printf("x=%d, *x=%d\n", x, *x);
	return(*x)++;
}

int func3(int* x)
{
	printf("x=%d, *x=%d \n", x, *x);
	return *(x++);
}

int main(void)
{
	int a;

	puts("\n ������ �켱���� \n");

	a = 10;
	printf(" a=%d ,  &a=%d, *x++=%d \n\n", a, &a, func1(&a));

	a = 10;
	printf(" a=%d ,  &a=%d, (*x)++=%d \n\n", a, &a, func2(&a));

	a = 10;
	printf(" a=%d ,  &a=%d, *(x++)=%d \n\n", a, &a, func3(&a));

	return 0;
}