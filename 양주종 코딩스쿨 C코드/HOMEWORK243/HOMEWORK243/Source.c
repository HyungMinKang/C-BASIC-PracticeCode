// �Լ��� �μ�, �Ű�����

#include <stdio.h>

void func(int x)
{
	printf("x= %d, &x=%d \n", x, &x);
}

int main(void)
{
	int a = 100;

	puts(" \n �Լ��� �μ�(argument), �Ű�����(parameter) \n");

	printf("a=%d, &a=%d \n\n", a, &a);

	func(a);

	return 0;
}