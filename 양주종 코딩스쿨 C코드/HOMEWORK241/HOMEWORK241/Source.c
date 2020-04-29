//최소값(min) 구하기

#include <stdio.h>

int getMin(int* x, int number)
{
	int i, min;
	min = *x;
	for (i = 1; i < number; i++)
	{
		if (min > * (x + i))
		{
			min = *(x + i);
		}
	}

	return min;
}

int main(void)
{
	int a[10] = { 55,35,65,75,95,15,45,25,5,85 };
	int i, n = sizeof(a) / sizeof(int);

	puts("* 원 본 \n");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}

	puts("\n\n");
	printf("min: %d \n", getMin(a, n));

	return 0;
}