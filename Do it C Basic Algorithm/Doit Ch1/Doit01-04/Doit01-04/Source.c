#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min3(int a, int b, int c)
{
	int min = a;
	if (b < min)min = b;
	if (c < min)min = c;
	return min;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("ÃÖ¼Ò°ª: %d", min3(a, b, c));
}