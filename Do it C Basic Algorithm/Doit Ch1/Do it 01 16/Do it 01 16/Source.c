#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int idx = 1;
	do {
		printf("num: ");
		scanf("%d", &num);
	} while (num <= 0);

	while (num / 10 != 0)
	{
		num = num / 10;
		idx++;

	}

	printf("%dÀÚ¸®", idx);
}