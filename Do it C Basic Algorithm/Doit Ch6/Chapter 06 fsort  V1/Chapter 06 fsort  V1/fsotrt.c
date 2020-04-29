#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fsort(int a[], int n, int max)
{
	int i;
	int* f = calloc(max + 1, sizeof(int));
	int *b = calloc(n, sizeof(int));

	for (i = 0; i < n; i++)f[a[i]]++; // 도수 분포표
	for (i = 1; i <= max; i++)f[i] += f[i - 1]; //누적 도수 분포표
	for (i = n - 1; i >= 0; i--)b[--f[a[i]]] = a[i]; //목적 배열-a배열 뒤에서부터 스캔해 누적도수분포표와 비교
	for (i = 0; i < n; i++)a[i] = b[i]; //배열b-> a로 복사

	free(b);
	free(f);
}

int main(void)
{
	int i, nx;
	int* x;
	const int max = 100;
	puts("도수 정렬");
	printf("요소개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("0~%d의 정수 입력\n", max);
	for (i = 0; i < nx; i++)
	{
		do {
			printf("x[%d]:", i);
			scanf("%d", &x[i]);
		} while (x[i]<0 || x[i]>max);
	}
	
	fsort(x, nx, max);
	puts("도수정렬 결과");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}

	free(x);
	return 0;
}