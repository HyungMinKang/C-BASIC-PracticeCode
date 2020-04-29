#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isupper(int a[], int n)
{
	int i;
	for (i = n-1 ; i > 0; i--)
	{
		if (a[i] < a[i - 1])
		{
			return -1;
		}
	}

	return 1;
}

int isdowner(int a[], int n)
{
	int i;
	for (i = n-1 ; i >0; i--)
	{
		if (a[i] > a[i - 1])
		{
			return -1;
		}
	}
	
	return 1;
}


int main(void)
{
	int i,nx, res = 0;
	int* x;
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		scanf("%d", &x[i]);
	}
	res = isupper(x, nx);
	if (res == 1)
	{
		printf("오름차순");
		return 0;
	}
	res = isdowner(x, nx);
	if (res == 1)
	{
		printf("내림차순");
		return 0;
	}

	printf("섞임");
	return 0;
}