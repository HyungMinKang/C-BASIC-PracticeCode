#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[7];
int main()
{
	int i,sum=0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 != 0)
		{
			sum += arr[i];
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d", sum);

}