#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[6];
int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 5; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] * arr[i];
		sum += arr[i];
	}

	printf("%d", sum % 10);
	
}