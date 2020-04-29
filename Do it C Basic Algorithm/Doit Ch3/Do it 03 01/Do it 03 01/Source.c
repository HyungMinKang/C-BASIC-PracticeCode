#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* 요소의 개수가 n개인 배열 a에서 key와 일치하는 요소를 선형검색(linear search)*/
int linearsearch(const int a[], int n, int key)
{
	int i = 0;
	while (1)
	{
		if (i == n)
			return -1;  //검색실패 비정삭적 값 리턴
		if (a[i] == key)
			return i; //검색성공 key값이 존재하는 index 반환
		i++;
	}
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;
	puts("linear search");
	printf("배열의 요소 개수");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값(key): ");
	scanf("%d", &ky);
	idx = linearsearch(x, nx, ky);
	if (idx == -1)
		puts("search fail");
	else
		printf("%d은 x[%d]에 있다 \n", ky, idx);

	free(x);
	return 0;
}
