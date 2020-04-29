#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
	int i;
	int pl = 0;
	int pr = n-1;
	int pc;
	int count=0;
	do {
		pc = (pl + pr) / 2;

		if (a[pc] == key) {
			while (pc > pl && a[pc - 1] == key)
				pc--;
			return pc;
		}
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
		
	} while (pl <= pr);
	
	

	return -1;
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;
	printf("배열의 요소 개수");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]:",i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("key값: ");
	scanf("%d", &ky);
	idx = bin_search2(x, nx, ky);
	printf("%d가 가장먼저 나타난곳은 x[%d]이다", ky, idx);
	
	free(x);
	return 0;
}