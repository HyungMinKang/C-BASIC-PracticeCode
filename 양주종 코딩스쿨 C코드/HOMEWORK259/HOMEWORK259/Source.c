// C��� ���ڿ��� �Լ��μ��� ����

#include <stdio.h>

void Display1(char x[])
{
	printf("\n Display1�Լ� x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

void Display2(char x[20])
{
	printf("\n Display2�Լ� x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

void Display3(char*x)
{
	printf("\n Display1�Լ� x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

int main(void)
{
	puts(" \n C��� ���ڿ��� �Լ��μ��� ���� \n");

	Display1("C-Programming");

	Display2("C-Programming");

	Display3("C-Programming");

	return 0;
}