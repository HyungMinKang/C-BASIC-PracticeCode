#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double x;

double f(double x)
{
	
	return x - (long long int)x;
}

int main()
{
	scanf("%lf", &x);
	printf("%.14lf \n", f(x));
	return 0;
}