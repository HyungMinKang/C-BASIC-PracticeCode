#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void bubble(int a[], int n)
{	
	int cnt = 0;
	int k = 0;
	while (k < n - 1)
	{
		int j;
		int last = n - 1;
		for (j = n - 1; j > k; j--)
			cnt++;
			if (a[j - 1] > a[j])
			{
				swap(int, a[j - 1], a[j]);
				last = j;
			}

		k = last;
	}
	printf("%d\n", cnt);
}

int main(void)
{
	int i, nx;
	int* x;
	printf("����� ����: ");
	scanf("%d", &nx);

	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
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