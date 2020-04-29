#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);

	if (num >= 30 && num <= 40)
		printf("win");
	else if (num >= 60 && num <= 70)
		printf("win");
	else
		printf("lose");

	return 0;
}