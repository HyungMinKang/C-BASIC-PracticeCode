#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y;
	scanf("%d", &y);
	if (y % 4 == 0 && y % 100 != 0)
		printf("yes");
	else if (y % 400 == 0)
		printf("yes");
	else
		printf("no");

	return 0;
}