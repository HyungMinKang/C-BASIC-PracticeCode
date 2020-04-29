#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void Quicksort(int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int pv = a[(pl + pr) / 2];

	int i;
	printf("a[%d]~a[%d]: {", left, right);
	for (i = left; i < right; i++)
		printf("%d ", a[i]);
	printf("%d}\n", a[right]);

	do {
		while (a[pl] < pv)pl++;
		while (a[pr] > pv)pr--;

		if (pl <= pr)
		{
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}

	} while (pl <= pr);
	if (left < pr)Quicksort(a, left, pr);
	if (right > pl)Quicksort(a, pl, right);
}

int main(void)
{
	int i, nx;
	int* x;
	puts("������ ���������");
	printf("��Ұ���:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	Quicksort(x, 0, nx - 1);
	puts("�������� ���İ�� ���");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}
	free(x);
	return 0;
}