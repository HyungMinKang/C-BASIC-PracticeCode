#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[1000];
	int n,i;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = n-1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}