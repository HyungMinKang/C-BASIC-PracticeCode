#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, k,i,j;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++ )
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n - 1 || j==0||j==n-1||(i + j+1) % k == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
}