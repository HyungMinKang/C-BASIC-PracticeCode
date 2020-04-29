#include<stdio.h>
int main(void)
{
	int h, b, c, s;
	double result;
	scanf("%d %d %d %d", &h, &s, &b, &c);
	result = (double)h * s * b * c / 8388608;
	printf("%.1lf MB", result);
	return 0;
}