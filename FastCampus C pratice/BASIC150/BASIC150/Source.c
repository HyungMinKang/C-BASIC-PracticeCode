#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (i == 0 || i == n-1)
		{
			for (j = 0; j < n; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < n; j++)
			{
				if (j == 0 || j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}

// 모범소스
#include <stdio.h> 

int main()
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	return 0;
}