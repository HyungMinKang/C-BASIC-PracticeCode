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
		printf("����");
	else if (a > 10 && a <= 20)
		printf("��ü��");
	else
		printf("��");

	return 0;
}