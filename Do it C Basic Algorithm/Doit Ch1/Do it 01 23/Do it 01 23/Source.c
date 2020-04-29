#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void triangleLB(int n) //���ʾƷ��� ����
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
}

void triangleLU(int n) //���� ���� ����
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= n - i; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
}

void triangleRU(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i-1; j++)
		{	
			putchar(' ');
		}
		for (j = 0; j <= n-i; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
}

void triangleRB(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}
		for (j = 1; j <= n - i; j++)
		{
			putchar(' ');
		}
		printf("\n");
	}
}

int main(void)
{
	int n;
	do {
		printf("�� �� �ﰢ���Դϱ�?:");
		scanf("%d", &n);
	} while (n <= 0);
	triangleLB(n);
	printf("\n");
	triangleLU(n);
	printf("\n");
	triangleRU(n);
	printf("\n");
	triangleRB(n);
	return 0;
}