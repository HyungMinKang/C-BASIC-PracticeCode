#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a, b, d[1010];
int maxi(int a, int b)
{
	int max = d[a];
	int i, index=0;
	for (i = a; i <= b; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
			
		}
	}
	
	for (i = a; i <= b; i++)
	{
		if (d[i] == max)
			return i;
	}
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &d[i]);

	scanf("%d%d", &a, &b);

	printf("%d\n", maxi(a, b));
}
