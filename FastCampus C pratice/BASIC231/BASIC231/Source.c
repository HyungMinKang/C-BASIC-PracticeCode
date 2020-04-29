#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1001];

int Max(int *arr,int n)
{
	int i;
	int max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}
int Min(int *arr, int n)
{
	int i;
	int min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

int main(void)
{
	int i,n; 
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d", Max(arr, n) - Min(arr, n));
	return 0;
}


