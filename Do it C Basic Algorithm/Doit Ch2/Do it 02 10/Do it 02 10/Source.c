#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sumof(const int a[], int num)
{
	int i;
	int sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main(void)
{
	int i;
	int na;
	int* height;
	printf("��� ��: ");
	scanf("%d", &na);
	height = calloc(na, sizeof(int));
	for (i = 0; i < na; i++)
	{
		printf("height[%d]: ",i);
		scanf("%d", &height[i]);
	}
	printf("Ű�� �հ�: %d", sumof(height, na));
	return 0;
}