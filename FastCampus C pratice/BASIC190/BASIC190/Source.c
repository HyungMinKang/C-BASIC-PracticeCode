#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[101][101];
	int n, m;
	int i, j;
	scanf("%d %d", &n, &m);
	int num = 1;

	for (i = m; i >0; i--)
	{

		if (m % 2 == 0)
		{	
			if (i % 2 == 0)
			{
				for (j = n; j >0; j--)
				{
					arr[j][i] = num;
					num++;
				}
			}
			else
			{
				for (j = 1; j <=n; j++)
				{
					arr[j][i] = num;
					num++;
				}
			}
		}

		else if (m % 2 != 0)
		{
			if (i % 2 != 0)
			{
				for (j = n; j > 0; j--)
				{
					arr[j][i] = num;
					num++;
				}
			}
			else
			{
				for (j = 1; j <= n; j++)
				{
					arr[j][i] = num;
					num++;
				}
			}
		}

	
	
	}

		
		
		
		
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}