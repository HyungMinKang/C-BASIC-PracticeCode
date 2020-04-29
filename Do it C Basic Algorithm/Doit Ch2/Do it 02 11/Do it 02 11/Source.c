#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sumof(const int a[], int num)
{
	int i;
	int sum = 0;
	for (i = 0; i < num; i++)
		sum += a[i];

	return sum;
}

double aveof(const int a[], int num)
{
	double avg;
	avg = (double)sumof(a,num) / num;
	return (double)avg;
}

int main(void)
{
	int i;
	int na;
	int* height;
	printf("사람수: ");
	scanf("%d", &na);
	height = calloc(na, sizeof(int));
	for (i = 0; i <na; i++)
	{
		printf("height[%d]: ", i);
		scanf("%d", &height[i]);
	}

	printf("평균값: %lf", aveof(height, na));
	return 0;
}