#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
	int i, j, h;
	int cnt = 0;
	for (h = 1; h < n / 9; h = 3 * h + 1)
		;

	for (; h > 0; h /= 3)
	{
		for (i = h; i < n; i++)
		{
			int tmp = a[i];
			for (j = i - h; j >= 0 && a[j] > tmp; j -= h)
			{	
			
				a[j + h] = a[j];
				cnt++;
			}
			
			a[j + h] = tmp;
			cnt++;
		}
	}
	printf("요소가 %d번 움직임\n", cnt);
}

int main(void)
{
	int i, nx;
	int* x;

	puts("셸정렬");
	printf("요소개수");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:",i);
		scanf("%d", &x[i]);
	}

	shell(x, nx);

	puts("오름차순 정렬결과");

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:%d\n", i, x[i]);
	}

	free(x);
	return 0;
}