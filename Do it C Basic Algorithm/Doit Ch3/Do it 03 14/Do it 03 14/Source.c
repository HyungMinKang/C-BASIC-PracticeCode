#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int long_cmpr(const void* a, const void* b)
{
	if (*(long*)a < *(long*)b)
		return 1;
	else if (*(long*)a > * (long*)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	long i, nx, ky;
	long* x;
	long* p;
	printf("요소의 개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	printf("내림차순 입력");
	printf("x[0]:");
	scanf("%ld", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]:", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("검색값:");
	scanf("%ld", &ky);
	p = bsearch(&ky, x, nx, sizeof(long), long_cmpr);
	if (p == NULL)
		puts("search fail");
	else
	{
		printf("%ld은 x[%ld]에 있다", ky, (long)(p - x));
	}
	free(x);
	return 0;
}