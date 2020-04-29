#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10];
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 5 == 0)
		{
			printf("%d", arr[i]);
			return 0;
		}
	}

	printf("0");

	return 0;
}