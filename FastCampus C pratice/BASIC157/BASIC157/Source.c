#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h,k,i,j;
	char d;
	scanf("%d %d %c",&h, &k, &d);
	if (d == 'L')
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < k; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (d=='R')
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < k - i; j++)
			{
				printf(" ");
			}

			for (j = 0; j < k; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
		return 0;
}

//모범코드 
#include <stdio.h>
int main() {
	int n, k, i, j;
	char h;
	scanf("%d %d %c", &n, &k, &h);
	for (i = n; i > 0; i--)
	{
		if (h == 'R')
			for (j = 1; j < i; j++)
				printf(" ");
		else
			for (j = 1; j <= n - i; j++)
				printf(" ");

		for (j = 1; j <= k; j++)
			printf("*");
		printf("\n");
	}
}