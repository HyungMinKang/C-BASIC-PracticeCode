#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min4(int a, int b, int c,int d)
{
	int min = a;
	if (b < min)min = b;
	if (c < min)min = c;
	if (d < min)min = d;
	return min;
}
int main()
{
	int a, b, c,d;
	scanf("%d %d %d %d", &a, &b, &c,&d);
	printf("ÃÖ¼Ò°ª: %d", min4(a, b, c, d));
}