#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[101] = { 0 };
	int res[101] = { 0 };
	int n,g, i, j = 1,k=1;
	scanf("%d %d", &n, &g);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (n % g != 0)
	{
		for (i = 1; i <=( n / g)+1; i++)
		{	
			int min = INT_MAX;
		
			if (n%g < g)
			{
				for (int j = i + ((i - 1) * g); j <= n; j++)
				{
					if (arr[j] < min)
					{
						min = arr[j];
						res[k] = arr[j];
					}
				}
			}
			
			else
			{
				for (int j = i + ((i - 1) * g); j <= i * g; j++)
				{
					if (arr[j] < min)
					{
						min = arr[j];
						res[k] = arr[j];
					}
				}
			}
			k++;
			n = n - g;
		}
	}
	else
	{
		for (i = 1; i <= n / g; i++)
		{
			int min = INT_MAX;

			if (n %g < g)
			{
				
				for (int j = i + ((i - 1) * g); j <= n; j++)
				{
					if (arr[j] < min)
					{
						min = arr[j];
						res[k] = arr[j];
					}
				}
			}

			else
			{
				for (int j = i + ((i - 1) * g); j <= i * g; j++)
				{
					if (arr[j] < min)
					{
						min = arr[j];
						res[k] = arr[j];
					}
				}
			}
			k++;
			n = n - g;
		}
		
	
	}
	
	
	
	for (i = 1; i <=j; i++)
	{
		printf("%d ", res[i]);
	}

	return 0;
}