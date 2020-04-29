#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x; x=y; y=t;}while(0)

void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
				swap(int, a[j], a[j + 1]);
		}
	}
}

int main(void)
{
	int nx, i;
	int* x;

	puts("�������� ����2");
	printf("����� ����: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);

	puts("������ ���");
	
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}

	free(x);
	return 0;
}