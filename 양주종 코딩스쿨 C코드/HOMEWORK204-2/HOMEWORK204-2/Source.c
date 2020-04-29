#include <stdio.h>

void Swap(int* p, int num);

int main(void)
{
	int num1=10, num2=20;
	int* p1 = &num1;
	int* p2 = &num2;


	printf("%d %d", num1, num2);
	Swap(p1, p2);
	printf("%d %d", num1, num2);
	return 0;
}

void Swap(int* a, int * b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

