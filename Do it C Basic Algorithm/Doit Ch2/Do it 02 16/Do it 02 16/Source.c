#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n)
{
	int i;
	int tmp;
	for(i=0; i<n;i++)
	{ 
		a[i] = b[i];
	}
}

void showarray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("a[%d]=%d ",i, a[i]);
}

int main(void)
{
	int i, n;
	int* a;
	int* b;
	printf("배열의 요소 개수");
	scanf("%d", &n);
	a = calloc(n, sizeof(int));
	b = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("b[%d]:", i);
		scanf("%d", &b[i]);
	}

	ary_copy(a, b, n);
	showarray(a, n);
	
	free(a);
	free(b);
	return 0;
}