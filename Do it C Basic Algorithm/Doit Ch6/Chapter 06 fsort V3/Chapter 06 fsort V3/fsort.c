#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fsort(int a[], int n,int min, int max)
{
	int i;
	int* f = calloc(max - min + 2, sizeof(int));
	int* b = calloc(n, sizeof(int));

	for (i = 0; i < n; i++)f[a[i] - min]++;
	for (i = 1; i <= max - min + 1; i++)f[i] += f[i - 1];
	for (i = n - 1; i >= 0; i--)b[--f[a[i] - min]] = a[i];
	for (i = 0; i < n; i++)a[i] = b[i];

	free(f);
	free(b);
}

int main(void)
{
	int i, nx;
	int* x;
	int max, min;
	puts("���� ����");
	printf("��� ����");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("�ּҰ�:");
	scanf("%d", &min);
	while (1)
	{
		printf("�ִ밪:");
		scanf("%d", &max);
		if (max > min)break;
		printf("%d���� ū ���� �Է��ϼ���\n", min);
	}

	printf("%d~%d�� ������ �Է��ϼ���\n", min,max);

	for (i = 0; i < nx; i++)
	{
		do {
			printf("x[%d]:",i);
			scanf("%d", &x[i]);
		} while (x[i]<min || x[i]>max);
	}
	
	fsort(x, nx, min, max);
	puts("�������İ�� ���");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}

	free(x);
	return 0;

}