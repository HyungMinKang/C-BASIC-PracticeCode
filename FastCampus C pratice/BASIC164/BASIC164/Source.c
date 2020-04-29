#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	
	int arr[10];
	int i, k;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &k);

	for (i = 0; i < 10; i++)
	{
		if (i == k-1)
		{
			printf("%d", arr[i]);
			break;
		}
	}

	return 0;
}