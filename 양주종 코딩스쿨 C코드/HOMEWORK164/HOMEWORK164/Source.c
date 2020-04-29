#include <stdio.h>
#define ARRAY_SIZE 10
void Output(int x[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("#%d= %d \n",i, x[i]);
}

void BubbleSort(int x[], int n)
{
	int i, j, tmp;
	for (i = -0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (x[j] > x[j + 1])
			{
				tmp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int a[ARRAY_SIZE] = { 65, 25,45,35,55,15,95,5,85,75 };

	puts("*원본출력*");
	Output(a, ARRAY_SIZE);

	BubbleSort(a, ARRAY_SIZE);
	puts(" \n 정렬후 결과 출력");
	Output(a, ARRAY_SIZE);

	return 0;
}