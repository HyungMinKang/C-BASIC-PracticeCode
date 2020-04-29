#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int w, h, b;
	double result;
	scanf("%d %d %d", &w, &h, &b);
	result = (double)w * h * b / 8388608;
	printf("%.2lf MB", result);
	return 0;
}