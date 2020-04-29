#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[101][101];
	int i, j,u;
	int x1, x2, y1, y2,tmp;
	int cnt = 0;
	for (i = 1; i <= 4; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		if (x1 > x2)
		{
			tmp = x1;
			x1 = x2;
			x2 = tmp;
			tmp = y1;
			y1 = y2;
			y2 = tmp;
		}

		for (u = x1; u < x2; u++)
		{
			for (j = y1; j < y2; j++)
			{
				a[u][j] = 1;
			}
		}


	}

	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			if (a[i][j] == 1)
				cnt++;
		}
	
	}

	printf("%d", cnt);
	return 0;
	
	
}