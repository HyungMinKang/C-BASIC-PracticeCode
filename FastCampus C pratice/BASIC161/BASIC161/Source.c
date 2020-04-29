#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[100];
	int k, i;
	int cnt = 2;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &arr[i]);
	}

	while (cnt != 0)
	{
		for (i = 0; i < k; i++)
		{
			printf("%d \n", arr[i]);

		}
		cnt--;
	}
}