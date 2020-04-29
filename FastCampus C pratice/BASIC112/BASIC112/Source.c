#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[3];
	int i,j,tmp;
	
	for (i = 0; i <3; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	
	if (arr[2] < arr[0] + arr[1])
		printf("yes");
	else
		printf("no");
}