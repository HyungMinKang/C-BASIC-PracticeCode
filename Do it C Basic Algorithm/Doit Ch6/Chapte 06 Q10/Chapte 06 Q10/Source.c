#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void binary_insertionsort(int a[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int key = a[i];
		int pl = 0; // �˻������� ù �ε���
		int pr = i - 1;  //�˻������� �� �ε���
		int pc; // �˻������� ��� �ε���
		int pd;  //�����ϴ� ��ġ�� �ε���

		do {
			pc = (pl + pr) / 2;
			if (a[pc] == key)
				break;
			else if (a[pc] < key)
				pl = pc + 1;
			else
				pr = pc - 1;
		} while (pl <= pr);
		pd = (pl <= pr) ? pc + 1: pr + 1;

		memmove(&a[pd + 1], &a[pd], (i - pd) * sizeof(int));
		a[pd] = key;
	}
}

int main(void)
{
	int i, nx;
	int* x;
	puts("���� ���� ����");
	printf("����� ��:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	binary_insertionsort(x, nx);
	puts("������������ �����߽��ϴ�");
	for (i = 0; i < nx; i++)
		printf("x[%d]=%d \n", i, x[i]);

	free(x);
	return 0;
}