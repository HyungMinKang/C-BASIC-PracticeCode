#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main(void)
{
	int i;
	int a[5];
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	qsort((void*)a, 5, sizeof(int), compare);

	printf("%d\n", sum / 5);
	printf("%d", a[5 / 2]);
	

	return 0;
}