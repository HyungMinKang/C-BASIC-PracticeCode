#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double num;
	scanf("%lf", &num);
	if (num >= 50 && num <= 60)
		printf("win");
	else
		printf("lose");

	return 0;
}