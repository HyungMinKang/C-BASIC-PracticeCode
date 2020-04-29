#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[6];
	int tmp;
	int i,j;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


	printf("%d", arr[3]);
	return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
		return *(int *)a - *(int *)b;
}

int main(void)
{
	int i;
	int a[5];

	for (i=0;i<5;i++)
		scanf("%d",&a[i]);

	qsort((void*)a,5,sizeof(int),compare);

	printf("%d",a[5/2]);

	return 0;
}
*/