#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	
	for (i = 0; i <=2*n-1; i++)
	{
		if (i <n)
		{
			for (j = 0; j <=i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		else
		{
			for (j =0 ; j <2*n-i-1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}

// 모범코드
#include<stdio.h>  

int main()
{
	int i, j, n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}