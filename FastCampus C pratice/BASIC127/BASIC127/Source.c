#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a, b;
	double i;
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	for (i = a; i <= b; i = i + 0.01)
	{
		printf("%.2f ", i);
	}
}