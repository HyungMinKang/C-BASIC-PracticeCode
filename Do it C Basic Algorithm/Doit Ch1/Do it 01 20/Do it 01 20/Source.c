#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j;
	printf("입력할 수:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			putchar('*');
		}   
		printf("\n");
	}
	return 0;
}