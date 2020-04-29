//포인터의 증감연산

#include <stdio.h>

void Display0(int x[10], int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		printf("%5d", x[i]);
	}
}

void Display1(int* x, int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		printf("%5d", *(x + i));
	}
}

void Display2(int* x, int number)
{
	int i;
	for (i = 0; i < number; i++, x++)
	{
		printf("%5d", *x);
	}
}

void Display3(int* x, int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		printf(" %5d", *x++);
	}
}

int main(void)
{
	int a[10] = { 5,15,25,35,45,55,65,75,85,95 };
	int n = sizeof(a) / sizeof(int);

	puts("\n\n Display0함수 출력 \n");
	Display0(a, n);

	puts("\n\n Display1함수 출력 \n");
	Display1(a, n);

	puts("\n\n Display2함수 출력 \n");
	Display2(a, n);

	puts("\n\n Display3함수 출력 \n");
	Display3(a, n);

	return 0;
}