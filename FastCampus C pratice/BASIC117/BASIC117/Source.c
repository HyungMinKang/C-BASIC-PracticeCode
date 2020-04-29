#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	double x, y;
	x = (double)a / b;
	y = (double)c / d;

	if (x > y)
		printf(">");
	else if (x == y)
		printf("=");
	else
		printf("<");

	
}