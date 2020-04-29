#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int s = 0, e = 1;


int main(void)
{
	int n, k;
	int* x;
	int* sum;
	int res=0, i, t=0;
	scanf("%d %d", &n, &k);
	x = calloc(n, sizeof(int));
	sum = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	for (i = 0; i <= n; i++)
	{
		if (i == 0)
			sum[i] = x[i];
		else
			sum[i] = sum[i - 1] + x[i];
	}

	for (i = 0; i <= n; i++)
	{	
		
		if (sum[e]-sum[s] == k)
		{
			t++;
			s++;
			e = s+ 1;

		}
		else
		{
			e++;
		}
	}
	
	printf("%d", t);
}