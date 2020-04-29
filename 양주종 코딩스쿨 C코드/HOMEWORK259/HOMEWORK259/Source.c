// C언어 문자열이 함수인수로 전달

#include <stdio.h>

void Display1(char x[])
{
	printf("\n Display1함수 x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

void Display2(char x[20])
{
	printf("\n Display2함수 x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

void Display3(char*x)
{
	printf("\n Display1함수 x=%s, %%d=%d \n", x, x);
	printf("x=%d byte \n\n", sizeof(x));
}

int main(void)
{
	puts(" \n C언어 문자열이 함수인수로 전달 \n");

	Display1("C-Programming");

	Display2("C-Programming");

	Display3("C-Programming");

	return 0;
}