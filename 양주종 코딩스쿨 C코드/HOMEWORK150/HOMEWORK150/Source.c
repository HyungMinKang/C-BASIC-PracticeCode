#include <stdio.h>
void sub(int n)
{
	printf(" n = %d, &n= %d \n", n, &n);
}

int main(void)
{
	int a = 20, b = 30, c = 40;
	puts(" ������ ����");

	sub(a);
	sub(b);
	sub(c);

	puts(" �ּҸ� �� ������");
	return 0;
}