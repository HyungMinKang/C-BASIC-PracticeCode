#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[171][171], b[171][171], i, j;

int main()
{	
	int x, y;
	int n, m, z;
	int k;
	scanf("%d %d", &x, &y);
	scanf("%d %d %d", &n, &m, &z);

	for (i = 1; i <= x; i++)
		for (j = 1; j <=y; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = 0;
		}

	scanf("%d", &k);
	while (k > 0)
	{
		for (i = 1; i <=x; i++)
		{
			for (j = 1; j <= y; j++)
			{
				b[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
				if (a[i][j] == 0)
					b[i][j] = b[i][j] == n ? 1 : 0;
				else
				{ 
					if (b[i][j] < m ||b[i][j]>=z)
						b[i][j] = 0;
					else  
						b[i][j] = 1;
				}

				
				
			}
		}

		for (i = 1; i <= x; i++)
		{
			for (j = 1; j <= y; j++)
			{
				a[i][j] = b[i][j];
				b[i][j] = 0;
			}
		}
		
		k--;


	}
	
	for (i = 1; i <=x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


/*
#include <stdio.h>

int a[172][172], b[172][172], i, j;
int n, m, k, birth, live, death;

int main()
{
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &birth, &live, &death);
	for(i = 1; i <= n; i++)
		for(j = 1 ;j <= m; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = 0;
		}
	scanf("%d", &k);

	while(k--)
	{
		for(i = 1; i <= n; i++)
			for(j = 1; j <= m; j++)
			{
				b[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
				if(a[i][j] == 0)
					b[i][j] = b[i][j] == birth ? 1 : 0;
				else
					b[i][j] = (live <= b[i][j] && b[i][j] < death) ? 1 : 0;
			}

		for(i = 1; i <= n; i++)
			for(j = 1; j <= m; j++)
				a[i][j] = b[i][j];
	}

	for(i = 1; i <= n; i++, puts(""))
		for(j = 1; j <= m; j++)
			printf("%d ", b[i][j]);
	return 0;
}*/