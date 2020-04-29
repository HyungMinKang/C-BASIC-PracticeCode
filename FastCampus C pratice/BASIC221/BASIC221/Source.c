#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[51][51];
	int n, s = 1, v = 0;
	int i, j;
	int ipx = 1, val = 0;
	scanf("%d", &n);
	int rowlim = n-1, callim = n;
	while (val < n * n)
	{
		for (i = 0; i < callim; i++)
		{
			val++;
			v = v + ipx;
			a[v][s] = val;
		}
		callim--;
		
		
		for (i = 0; i < rowlim; i++)
		{
			val++;
			s = s + ipx;
			a[v][s] = val;

		}
		rowlim--;
		
		ipx = ipx * -1;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}