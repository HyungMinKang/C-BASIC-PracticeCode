#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[])
{
	int i;
	int ind = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			idx[ind] = i;
			ind++;
		}
	}
	return ind;
}

int main(void)
{
	int i, nx, ky, res;
	int* x;
	int* idx;
	printf("����� ����");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	res = search_idx(x, nx, ky, idx);
	if (res == 0)
	{
		printf("��ġ�ϴ°��� ����");
	}

	else 
	{
	printf("key���� ��ġ�ϴ� ����: %d \n", res);

	for (i = 0; i < res; i++)
		printf("x[%d]", idx[i]);

	putchar('\n');
	}


	free(x);
	free(idx);
	
	return 0;
}