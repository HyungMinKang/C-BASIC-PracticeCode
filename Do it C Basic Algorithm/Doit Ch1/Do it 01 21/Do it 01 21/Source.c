#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,m, i, j;
	printf("����:");
	scanf("%d", &n);
	printf("�ʺ�:");
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