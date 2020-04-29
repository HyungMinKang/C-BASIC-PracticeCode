#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[101] = { 0 };
	int res[101] = { 0 };
	int n, g, i, j = 1, k = 1;

	scanf("%d %d", &n, &g);
	int count = n;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (n % g != 0)
	{
		for (i = 1; i <= (n / g) + 1; i++)
		{
			int max = INT_MIN;

			if (count < g)
			{
				for (int j = ((i - 1) * g) + 1; j <= ((i - 1) * g) + (n % g); j++)
				{
					if (arr[j] > max)
					{
						max = arr[j];
						res[k] = arr[j];
					}
				}
			}

			else
			{
				for (int j = ((i - 1) * g) + 1; j <= i * g; j++)
				{
					if (arr[j] > max)
					{
						max = arr[j];
						res[k] = arr[j];
					}
				}
			}
			k++;
			count = count - g;
		}
	}
	else
	{
		for (i = 1; i <= n / g; i++)
		{
			int max = INT_MIN;
			for (int j = (i - 1) * g + 1; j <= i * g; j++)
			{
				if (arr[j] > max)
				{
					max = arr[j];
					res[k] = arr[j];
				}

			}
			k++;

		}
	}






	for (i = 1; i <= k - 1; i++)
	{
		printf("%d ", res[i]);
	}


	return 0;
}
