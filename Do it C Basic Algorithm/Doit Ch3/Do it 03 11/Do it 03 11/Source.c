#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > * (int*)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int* x;
	int* p;
	printf("����� ����");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]", i);
			scanf("%d", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("key��: ");
	scanf("%d", &ky);
	p = bsearch(&ky, x, nx, sizeof(int), int_cmpr);
	if (p == NULL)
		puts("�˻�����");
	else
		printf("%d�� x[%d]�� �ִ�\n", ky, (int)(p - x));
	free(x);
	return 0;
}