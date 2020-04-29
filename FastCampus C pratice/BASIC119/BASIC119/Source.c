#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double h, w;
	double pw, a;

	scanf("%lf %lf", &h, &w);
	pw = (h - 100) * 0.9;
	a = (w - pw) * 100 / pw;

	if (a <= 10)
		printf("정상");
	else if (a > 10 && a <= 20)
		printf("과체중");
	else
		printf("비만");

	return 0;
}