#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int long_cmpr(const void* a, const void* b)
{
	if (*(long*)a < *(long*)b)
		return 1;
	else if (*(long*)a > * (long*)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	long i, nx, ky;
	long* x;
	long* p;
	printf("����� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	printf("�������� �Է�");
	printf("x[0]:");
	scanf("%ld", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]:", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("�˻���:");
	scanf("%ld", &ky);
	p = bsearch(&ky, x, nx, sizeof(long), long_cmpr);
	if (p == NULL)
		puts("search fail");
	else
	{
		printf("%ld�� x[%ld]�� �ִ�", ky, (long)(p - x));
	}
	free(x);
	return 0;
}