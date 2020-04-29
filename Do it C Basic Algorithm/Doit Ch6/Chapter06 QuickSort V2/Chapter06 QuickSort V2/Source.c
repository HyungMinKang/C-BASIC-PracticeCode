#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void Quicksort(int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int pv = a[(pl + pr) / 2];

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

void Quick_sort(int a[], int n)
{
	Quicksort(a, 0, n - 1);
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
	Quick_sort(x, nx);
	puts("�������� ���İ�� ���");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}
	free(x);
	return 0;
}
