#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a의 값: ");
	scanf("%d", &a);
	do {
		printf("b의 값: ");
		scanf("%d", &b);
	} while (b <= a);

	printf("b-a= %d", b - a);
	return 0;
}