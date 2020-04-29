#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[7];
	int i;
	int count=1;

	for (i = 0; i < 7; i++) //7개의 데이터 입력
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 7; i++)
	{
		for (int j = 0; j < 6- i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		if (arr[i] == arr[6])
		{
			count++;
			break;
		}
	}
	if (count == 2)
	{
		printf("%d\n%d", arr[6],arr[6]);
	}
	else
	{
		printf("%d\n%d", arr[6], arr[5]);
	}
	return 0;
}
