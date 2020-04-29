#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)



int main(void)
{
	int value, price, temp;
	int i, j, k, n, a, b, c;
	int* d;
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	d = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
		j = i;
		while (j != 0 && d[j] > d[j - 1])
		{
			swap(int, d[j - 1], d[j]);
			j--;
		}
	}

	value = c;
	price = a;
	for (i = 0; i < n; ++i)
	{
		if (c / a < d[i] / b)
		{
			c += d[i];
			a += b;
		}
	}

	printf("%d", c / a);
	return 0;
}
