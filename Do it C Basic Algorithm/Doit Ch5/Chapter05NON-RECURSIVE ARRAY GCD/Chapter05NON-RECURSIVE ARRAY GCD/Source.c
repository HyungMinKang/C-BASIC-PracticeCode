#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd_array(const int a[], int n)
{
	int i, j;
	int num = max(a,n);
	int gcd;
	for (i = num; i > 0; i--)
	{	
		gcd = 0;
		for (j = 0; j < n; j++)
		{
			if (a[j] % i != 0)
			{	
				gcd = -1;
				break;
			}
		}
		if (gcd == -1)
			continue;
		else
		{
			
			return i;
		}
	}
	
}

int max(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int main(void)
{
	int a[100];
	int n,i;
	printf("요소의 개수:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("배열 모든요소의 최대공약수: %d", gcd_array(a, n));
	return 0;
}