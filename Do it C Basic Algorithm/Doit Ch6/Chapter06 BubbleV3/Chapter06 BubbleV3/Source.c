#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{ type t=x; x=y; y=t;}while(0)


void bubble(int a[], int n)
{
	int i, j,k;

	int exchange = 0, compare = 0;
	for (i = 0; i < n - 1; i++)
	{	
		printf("�н�%d\n", i + 1);
		for (j = n - 1; j >= i; j--)
		{	
			compare++;
			if (a[j - 1] > a[j])
			{	
				for (k = 0; k < n; k++)
				{	
					if (k == j - 1)
					{
						printf("%d+", a[j - 1]);
						continue;
					}
					printf("%d ", a[k]);

				}
				printf("\n");
				exchange++;
				swap(int, a[j - 1], a[j]);
			}
			else
			{
				for (k = 0; k < n; k++)
				{
					if (k == j - 1)
					{
						printf("%d-", a[j - 1]);
						continue;
					}
					printf("%d ", a[k]);

				}
				printf("\n");
			}
		}
	}
	printf("�񱳸� %d�� �߽��ϴ�\n", compare);
	printf("��ȯ�� %d�� �߽��ϴ�", exchange);
}

int main(void)
{
	int i, nx;
	int* x;

	puts("��������");
	printf("����� ����: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);

	

	free(x);

	return 0;
}