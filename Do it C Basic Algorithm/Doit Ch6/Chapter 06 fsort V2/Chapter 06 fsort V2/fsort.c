#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




void fsort(int a[], int n, int max)
{
	int i;
	int* f = calloc(max + 1, sizeof(int));
	int* b = calloc(n, sizeof(int));

	printf("������ a�迭\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	for (i = 0; i < n; i++)f[a[i]]++;// ���� ����ǥ

	printf("���� ����ǥ\n");
	for (i = 0; i < max;i++)
	{
		printf("f[%d]=%d\n", i, f[i]);
	}

	for (i = 1; i <= max; i++)f[i] += f[i - 1]; //���� ���� ����ǥ

	printf("���� ��������ǥ\n");
	for (i = 0; i < max; i++)
	{
		printf("f[%d]=%d\n", i, f[i]);
	}
	for (i = n - 1; i >= 0; i--)b[--f[a[i]]] = a[i]; //���� �迭-a�迭 �ڿ������� ��ĵ�� ������������ǥ�� ��

	printf("�۾��迭 b\n");
	for (i = 0; i < n; i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}
	for (i = 0; i < n; i++)a[i] = b[i]; //�迭b-> a�� ����

	free(b);
	free(f);
}


int main(void)
{
	int i, nx;
	int* x;
	const int max = 100;
	puts("���� ����");
	printf("��Ұ���: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("0~%d�� ���� �Է�\n", max);
	for (i = 0; i < nx; i++)
	{
		do {
			printf("x[%d]:", i);
			scanf("%d", &x[i]);
		} while (x[i]<0 || x[i]>max);
	}

	fsort(x, nx, max);
	puts("�������� ���");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}

	free(x);
	return 0;
}