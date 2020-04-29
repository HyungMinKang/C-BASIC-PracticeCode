#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,m, i, j;
	printf("높이:");
	scanf("%d", &n);
	printf("너비:");
	scanf("%d", &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
	return 0;
}