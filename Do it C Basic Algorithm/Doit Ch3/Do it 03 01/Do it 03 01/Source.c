#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* ����� ������ n���� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� �����˻�(linear search)*/
int linearsearch(const int a[], int n, int key)
{
	int i = 0;
	while (1)
	{
		if (i == n)
			return -1;  //�˻����� �������� �� ����
		if (a[i] == key)
			return i; //�˻����� key���� �����ϴ� index ��ȯ
		i++;
	}
}

int main(void)
{
	int i, nx, ky, idx;
	int* x;
	puts("linear search");
	printf("�迭�� ��� ����");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���(key): ");
	scanf("%d", &ky);
	idx = linearsearch(x, nx, ky);
	if (idx == -1)
		puts("search fail");
	else
		printf("%d�� x[%d]�� �ִ� \n", ky, idx);

	free(x);
	return 0;
}
