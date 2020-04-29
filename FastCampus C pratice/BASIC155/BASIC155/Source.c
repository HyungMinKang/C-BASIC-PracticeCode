#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || i == n - 1||i==n/2)
		{
			for (j = 0; j < n; j++)
				printf("*");

			printf("\n");
		}
		else
		{
			for (j = 0; j < n; j++)
			{
				if (j == 0 || j == n-1 ||j==n/2||j == i || j == n - 1-i)
					printf("*");
				
				else
					printf(" ");
			}

			printf("\n");
		}
	}
}

//모범코드
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == 1 || i == 1 || i == n || j == n || i == j || i == n - j + 1 || n / 2 + 1 == i || n / 2 + 1 == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}