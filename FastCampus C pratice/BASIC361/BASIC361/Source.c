#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int i, j, k;
	int cnt = 0;
	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <=i; j++)
		{
			for (k = 1; k <=j; k++)
			{
				if (i + j + k == n)
				{	
					if (i < j + k)
					{
						cnt++;
					}
				}
			}
		}
	}

	printf("%d", cnt);
}