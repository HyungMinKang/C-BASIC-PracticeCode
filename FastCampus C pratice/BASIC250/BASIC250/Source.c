#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

void f(int n)
{
	if (n%2==0)
		printf("even");
	else
		printf("odd");
}

int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}