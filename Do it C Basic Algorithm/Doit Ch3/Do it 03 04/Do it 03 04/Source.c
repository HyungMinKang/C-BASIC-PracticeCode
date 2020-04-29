/* binary search */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key) //검색성공
			return pc;

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
	puts("이진탐색");
	printf("요소개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("오름차순으로 입력하세요\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]: ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]); //앞에 값보다 작은값이 입력되면 재입력
	}

	printf("검색값(key): ");
	scanf("%d", &ky);
	idx = bin_search(x, nx, ky);
	if (idx == -1)
		puts("search fail");
	else
		printf("%d는 x[%d]에 있다 \n", ky, idx);

	free(x);
	return 0;
}