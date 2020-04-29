#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int  x[100001];
int main(void)
{	
	
	int i;
	int start = 0;
	int n, k;
	scanf("%d %d", &n, &k);
	int max = INT_MIN, sum = 0;
	
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	while (start<=n-k)
	{	
		sum = 0;
		for (i = start; i < start+k; i++)
		{
			sum += x[i];
		}
		
		if (sum > max)
		{
			max = sum;
		}
		start++;
	}

	printf("%d", max);
	return 0;
}