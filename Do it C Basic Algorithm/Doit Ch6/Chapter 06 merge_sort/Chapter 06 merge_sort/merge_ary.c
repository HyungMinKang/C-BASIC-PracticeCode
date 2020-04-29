#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void merge(const int a[], int na, const int b[], int nb, int c[])
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	
	while (pa < na && pb < nb)  // a�� b�迭�� ���̻� �����Ұ��� ����������
		c[pc++] = (a[pa] < b[pb]) ? a[pa++] : b[pb++];

	while (pa < na) //a�迭�� ���� ���� �ִ� ��� == b�迭 ����Ϸ�
		c[pc++] = a[pa++];
	while (pb < nb) //b�迭�� ���� ���� �ִ� ��� == a�迭 ����Ϸ�
		c[pc++] = b[pb++];
}

int main(void)
{
	int i, na, nb;
	int * a, * b, * c;
	printf("a�� ��Ұ���:"); scanf("%d", &na);
	printf("b�� ��Ұ���:"); scanf("%d", &nb);
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
	puts("a�� b�� �����Ͽ� �迭c�� ����");
	for (i = 0; i < na + nb; i++)
	{
		printf("c[%d]:%d\n", i, c[i]);
	}
	free(a);
	free(b);
	free(c);
	return 0;

}
