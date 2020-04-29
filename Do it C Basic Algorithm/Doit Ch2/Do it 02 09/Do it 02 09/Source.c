#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{
	int i;
	int min = a[0];
	for (i = 1; i <= n - 1; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

int main(void)
{
	int i;
	int na;
	int* height;
	printf("사람 수: ");
	scanf("%d", &na);
	height= calloc(na, sizeof(int));
	for (i = 0; i < na; i++)
	{
		printf("height[%d]:", i);
		scanf("%d", &height[i]);
	}
	printf("최소값: %d", minof(height, na));
	return 0;
}