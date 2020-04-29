#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		int exchg = 0;
		for (j = n - 1; j > 1; j--)
		{
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				exchg++;
			}
		}
		if (exchg == 0)
			break;
	}
}

int main(void)
{
	int nx, i;
	int* x;
	
	printf("요소의 개수:");
	scanf("%d", &nx);
	
	x = (int*)calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ",i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);
	
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i,x[i]);
	
	}

	free(x);
	return 0;

}
