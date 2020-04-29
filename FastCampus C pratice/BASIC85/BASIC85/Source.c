#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int n, i,min,index;
	int a[10001];
	min = INT_MAX;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);

	}
	for (i = 1; i <=n; i++)
	{
		
		if (a[i] < min)
		{
			min = a[i];;
			index = i;
		}
	}
	printf("%d", a[index]);


	return 0;
}