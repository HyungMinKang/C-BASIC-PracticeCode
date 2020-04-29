#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num % 2 != 0)
		printf("odd");
	else
		printf("even");

	return 0;
}