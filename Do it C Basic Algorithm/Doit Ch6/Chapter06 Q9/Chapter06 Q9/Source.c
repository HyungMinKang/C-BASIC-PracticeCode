#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int tmp = a[0]=a[i];   // j>0 ������ ������� �ʾƵ� ��
		for (j = i; a[j - 1] > tmp; j--)
		{
			a[j] = a[j - 1];
		}
		if(j) a[j] = tmp;

	}
}

int main(void)
{
	int i, nx;
	int* x;
	puts("�ܼ� ���� ����");

	printf("��Ұ���: ");
	scanf("%d", &nx);
	x = calloc(nx+1, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);
	puts("������������ �����߽��ϴ�");
	for (i = 1; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}
	free(x);

	return 0;
}