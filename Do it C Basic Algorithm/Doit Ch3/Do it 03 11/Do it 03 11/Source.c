#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > * (int*)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int* x;
	int* p;
	printf("요소의 개수");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("내림차순으로 입력하세요\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]", i);
			scanf("%d", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("key값: ");
	scanf("%d", &ky);
	p = bsearch(&ky, x, nx, sizeof(int), int_cmpr);
	if (p == NULL)
		puts("검색실패");
	else
		printf("%d은 x[%d]에 있다\n", ky, (int)(p - x));
	free(x);
	return 0;
}