#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)


void bubble(int a[], int n)
{
	int i, j,k;
	for (i = 0; i < n - 1; i++)
	{
		int exchg = 0;
		printf("패스%d: \n", i + 1);
		for (j = n - 1; j > i; j--)
		{	
			for (k = 0; k < n; k++)
			{
				if (k == j - 1)
				{
					printf("%d %c", a[j - 1], a[j - 1] > a[j] ? '+' : '-');
					continue;
				}
				printf(" %d ", a[k]);
				
			}
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				exchg++;
			}
			printf("\n");
		}
		if (exchg == 0)
			break;
	}
}

int main(void)
{
	int i, nx;
	int* x;
	printf("요소개수:");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);

	free(x);
	return 0;
}