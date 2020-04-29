#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
int arr[7];


int main()
{
	int i, sum = 0;
	int  evenmax = INT_MIN, oddmax = INT_MIN;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 != 0)
		{
			if (arr[i] > evenmax)
				evenmax = arr[i];
		}
		else
		{
			if (arr[i] > oddmax)
				oddmax = arr[i];
		}
	}
	if (evenmax == INT_MIN)
		evenmax = 0;
	if (oddmax == INT_MIN)
		oddmax = 0;
	printf("%d", evenmax + oddmax);
	return 0;
}