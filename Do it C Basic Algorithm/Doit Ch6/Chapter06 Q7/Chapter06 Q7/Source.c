#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void selection(int a[], int n)
{
	int i, j,k;
	for (i = 0; i < n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		
		for (k = 0; k < n ; k++)
		{
			printf(k == i ? "  * " : (k == min) ? "  + " : "    ");
		}
		printf("\n");
		
		for (k = 0; k < n ; k++)
		{
			printf("%3d ", a[k]);
		}
		printf("\n");
		swap(int, a[i], a[min]);
	}
	putchar('\n');
	for (k = 0; k < n; k++)
		printf("%3d ", a[k]);
	putchar('\n');
}

int main(void)
{
	int i, nx;
	int* x;

	printf("정렬할 요소개수: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	selection(x, nx);


	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:%d\n", i, x[i]);

	}

	free(x);
	return 0;
}
