#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Gugudan(int n)
{
	int i;
	for (i = 1; i <= 9; i++)
		printf("%d*%d=%d \n", n, i, n * i);
}

int main()
{
	int n;
	scanf("%d", &n);
	Gugudan(n);
	return 0;
}