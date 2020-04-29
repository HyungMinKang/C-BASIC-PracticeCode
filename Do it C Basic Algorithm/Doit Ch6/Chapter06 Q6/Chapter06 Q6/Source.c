#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x; x=y;y=t;}while(0)

void shaker(int a[], int n)
{	
	int cnt = 0;
	int left = 0;
	int right = n - 1;
	int last = right;
	while (left < right)
	{
		int j;
		for (j = right; j > left; j--)
		{
			cnt++;
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		}

		left = last;

		for (j = left; j < right; j++)
		{	
			cnt++;
			if (a[j] > a[j + 1])
			{
				swap(int, a[j], a[j + 1]);
				last = j;
			}
		}
		right = last;
	}
	printf("%d\n", cnt);
	
}

int main(void)
{
	int nx, i;
	int* x;

	printf("요소개수: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d}: ", i);
		scanf("%d", &x[i]);
	}

	shaker(x, nx);


	for (i = 0; i < nx; i++)
	{
		printf("x[%d}: %d\n", i,x[i]);
		
	}

	return 0;
}