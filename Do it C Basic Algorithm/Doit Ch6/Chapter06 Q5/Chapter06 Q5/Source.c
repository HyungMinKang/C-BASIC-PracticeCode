#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void bubble(int a[], int n)
{
	int k = 0;
	while (k < n - 1)
	{
		int i,j;
		int last = n - 1;
		for (j = n - 1; j > k; j--)
		{
			for (i = 0; i < n; i++)
			{
				if (i == j - 1)
				{
					printf(" %d %c", a[j - 1], a[j - 1] > a[j] ? '+' : '-');
					continue;
				}
				printf(" %d ", a[i]);

			}
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				last = j;
			}
			printf("\n");
		}
		k = last;
	}
}

int main(void)
{
	int i, nx;
	int* x;
	printf("요소의 개수: ");
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