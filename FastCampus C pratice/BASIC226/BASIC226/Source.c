#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[101][101];

int main()
{
	int n, i, j, num = 1, sum = 0;;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
		
			arr[i][j] = num;
			num++;
		}		
	}


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{

			if (i == 1 || i == n || j == 1 || j == n)
				sum += arr[i][j];
		}
	}

	printf("%d", sum);

}