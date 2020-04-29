#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j,k;
	char c[100];
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = n; k >n - i ; k--)
		{
			printf(" ");
		}
		for (j = n-i; j >0 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}