#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[50][50];
	int n;
	scanf("%d", &n);
	int i, j;
	int num = 1;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[j][i] = num;
			num++;
		}
		
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


}