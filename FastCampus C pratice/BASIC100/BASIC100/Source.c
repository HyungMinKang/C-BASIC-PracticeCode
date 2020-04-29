#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

	if (num == 1 || num == 3 || num == 5 || num == 7)
		printf("oh my god");
	else
		printf("enjoy");
}