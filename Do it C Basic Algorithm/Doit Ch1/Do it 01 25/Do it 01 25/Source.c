#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void npira(int n)
{
	int i, j;
	for (i = 1; i<=n; i++)
	{
		for (j =1 ; j <=i-1; j++)
		{
			putchar(' ');
		}
		
		for (j = 1; j <= (n-i)*2+1; j++)
		{
			printf("%d",i%10);
		}
		
		printf("\n");
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	npira(n);
}