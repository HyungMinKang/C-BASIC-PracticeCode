#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num >= 50 && num <= 70)
		printf("win");
	else if (num % 6 == 0)
		printf("win");
	else
		printf("lose");
}