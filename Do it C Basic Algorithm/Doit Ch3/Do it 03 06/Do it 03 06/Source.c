#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key)
{
	int i = 0, j=0;
	a[n] = key;
	printf("   |");
	for (i = 0; i < n; i++)
	{
		printf("%3d", i);
	}
	printf("\n---+");
	for (i = 0; i < n; i++)
		printf("---", i);
	printf("-\n");
	
	for (i = 0; i < n; i++)
	{	
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, " ");
		printf("*\n");
		printf("%3d|", i);
		
		for (j = 0; j < n; j++)
		{	
			printf("%3d", a[j]);
		}
		printf("   |\n");
		if (a[i] == key)
			break;



	}
	return i == n ? -1 : i;
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;
	puts("선형검색(보초법)");
	printf("요소개수: ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패했습니다");

	else
		printf("%d은 x[%d]에 있습니다 \n", ky, idx);

	free(x);
	return 0;
}