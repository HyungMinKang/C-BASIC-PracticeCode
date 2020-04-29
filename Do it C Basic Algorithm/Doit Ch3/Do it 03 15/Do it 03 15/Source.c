#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i;
	char* x = (char*)base;
	for (i = 0; i < nmemb; i++)
	{
		if (!compar((const void*)& x[i * size], key))
			return (&x[i * size]);
	}
	return NULL;  //검색 실패
}

int int_cmp(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > * (int*)b)
		return 1;
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

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ",i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);

	p = seqsearch(&ky, x, nx, sizeof(int), int_cmp);
	if (p == NULL)
		puts("탐색 실패");
	else
		printf("%d는 x[%d]에 있다", ky, (int)(p - x));

	free(x);
	return 0;
}