#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[50][50];
int main(void)
{
	int i, j, k, val = 1;
	int n;
	scanf("%d", &n);
	j = 1, k = n / 2 + 1;
	arr[j][k] = val;
	for (i = 1; i < n * n; i++)
	{	
		if (val % n == 0)
		{
			j++;
			val++;
			arr[j][k] = val;
			continue;
		}

		
		j--;
		k++;
		val++;
		if (j < 1)
		{
			j = n;
		}
		if (k > n)
		{
			k = 1;

		}
	
		
			
		
		
		arr[j][k] = val;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}



/*모범코드

#include<stdio.h>

int main()
{
	int n, i, j, d[50][50], m = 1, a, b;

	scanf("%d", &n);
	for(i = a = 0, b = n / 2; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			d[a][b] = m++;
			if(j == n - 1) break;
			a = (a - 1 + n) % n;
			b = (b + 1) % n;
		}
		a = (a + 1) % n;
	}

	for(i = 0; i < n; i++, puts(""))
		for(j = 0; j < n; j++)
			printf("%d ", d[i][j]);
	return 0;
}


*/