#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void myswap(int *a, int *b)
{
	int  tmp;
	if (*a>*b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
}
