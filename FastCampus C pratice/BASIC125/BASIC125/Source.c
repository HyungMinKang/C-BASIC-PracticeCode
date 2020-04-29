#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int i;
	scanf("%d %d", &a, &b);
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	for (i = min; i <= max; i++)
		printf("%d ", i);

	return 0;
}