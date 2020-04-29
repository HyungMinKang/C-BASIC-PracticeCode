#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n)
{
	int i, j,k;
	for (i = 1; i < n; i++)
	{
		int tmp = a[i];
		for (k = 0; k < n; k++)
		{
			printf("%3d ", a[k]);
		}
		putchar('\n');

		for (j = i; j > 0 && a[j - 1] > tmp; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = tmp;

		printf("%*s%s", 4 * j, "", (i != j) ? "^-" : "  ");
		for (k = 0; k < 4 * (i - j); k++)
			putchar('-');
		printf("+\n\n");
	}
	
	for (k = 0; k < n; k++)
		printf("%3d ", a[k]);
	putchar('\n');

		
}


int main(void)
{
	int i, nx;
	int* x;
	puts("단순 삽입 정렬");

	printf("요소개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);
	puts("오름차순으로 정렬했습니다");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}
	free(x);

	return 0;
}