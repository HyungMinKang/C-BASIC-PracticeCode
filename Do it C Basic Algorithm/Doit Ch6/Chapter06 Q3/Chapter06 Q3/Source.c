#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x; x=y; y=t;}while(0)
int is_sorted(const int a[], int n)
{
	int i,j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
				return 0;
		}
	}

	return 1;
}


void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
				swap(int, a[j], a[j + 1]);
		}
		if (is_sorted(a, n))
			break;
	}
}

int main(void)
{
	int nx, i;
	int* x;
	
	printf("요소의 개수");
	scanf("%d", &nx);

	x = (int*)calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

}