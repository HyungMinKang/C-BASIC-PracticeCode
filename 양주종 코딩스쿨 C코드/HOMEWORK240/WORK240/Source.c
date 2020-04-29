// 최대값 구하기
#include <stdio.h>

int getMax(int* x, int number)
{
	int i, max;

	max = *x;
	for (i = 1; i < number; i++)
	{
		if (max < *(x + i))
		{
			max = *(x + i);
		}
	}
	return max;
}

int main(void)
{
	int a[10] = { 55,35,65,75,95,15,45,25,5,85 };
	int i, n = sizeof(a) / sizeof(int);

	puts(" * 원 본 * \n");
	for (i = 0; i < n; i++)
		printf("%5d ", a[i]);

	puts("\n\n");
	printf(" MAX: %d \n", getMax(a, n));
	return 0;
}