#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n,cnt=0;
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n-i; j++)
		{
			for (k = 1; k < n-i-j; k++)
			{
				if ( i + j + k == n)
				{	
					cnt++;
				}
			}
		}
	}

	printf("%d", cnt);
	return 0;
}