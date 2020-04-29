#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a, b;
	int i;
	scanf("%c %c", &a, &b);
	char max = a > b ? a : b;
	char min = a < b ? a : b;
	for (i = min; i <= max; i++)
		printf("%c ", i);

	return 0;
}