#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i;
	size_t pl = 0;
	size_t pr = nmemb - 1;
	size_t pc;
	char* x = (char*)base;

	while (1)
	{
		int comp = compar((const void*)& x[(pc = (pl + pr) / 2) * size], key);

		if (comp == 0)
		{
			for (; pc > pl; pc--)
			{
				if (compar((const void*)& x[(pc - 1) * size], key))
					break;
			}
			return &x[pc * size];
		}
		else if (pl == pr)
			break;  //종료 조건 1. 탐색실패 반복문 탈출
		else if (comp < 0) // key값이 pc보다 크다; 탐색범위 변경
			pl = pc + 1;
		else
			pr = pc - 1;
	}
	return NULL;  // 검색실패 값 반환
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
	printf("오름차순 정렬");
	printf("x[0]: ");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]: ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
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