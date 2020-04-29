#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void merge(const int a[], int na, const int b[], int nb, int c[])
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	
	while (pa < na && pb < nb)  // a나 b배열에 더이상 복사할것이 없을떄까지
		c[pc++] = (a[pa] < b[pb]) ? a[pa++] : b[pb++];

	while (pa < na) //a배열에 남은 값이 있는 경우 == b배열 복사완료
		c[pc++] = a[pa++];
	while (pb < nb) //b배열에 남은 값이 있는 경우 == a배열 복사완료
		c[pc++] = b[pb++];
}

int main(void)
{
	int i, na, nb;
	int * a, * b, * c;
	printf("a의 요소개수:"); scanf("%d", &na);
	printf("b의 요소개수:"); scanf("%d", &nb);
	a = calloc(na, sizeof(int));
	b = calloc(nb, sizeof(int));
	c = calloc(na + nb, sizeof(int));
	printf("a[0]: ");
	scanf("%d", &a[0]);
	for (i = 1; i < na; i++)
	{
		do {
			printf("a[%d]: ", i);
			scanf("%d", &a[i]);
		} while (a[i] < a[i - 1]);
	}

	printf("b[0]: ");
	scanf("%d", &b[0]);
	for (i = 1; i < nb; i++)
	{
		do {
			printf("b[%d]: ", i);
			scanf("%d", &b[i]);
		} while (b[i] < b[i - 1]);
	}

	merge(a, na, b, nb, c);
	puts("a와 b를 병합하여 배열c에 저장");
	for (i = 0; i < na + nb; i++)
	{
		printf("c[%d]:%d\n", i, c[i]);
	}
	free(a);
	free(b);
	free(c);
	return 0;

}
