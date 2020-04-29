#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int max(int* arr)
{
	int max = INT_MIN;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int min(int* arr)
{
	int min = INT_MAX;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int main()
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("%d \n", max(arr));
	printf("%d \n", min(arr));

	return 0;
}