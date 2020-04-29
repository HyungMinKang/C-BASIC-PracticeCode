#include <stdio.h>
#define ARRAY_SIZE 10 

void Output(int x[], int n, char* msg)
{
	int i;
	puts(msg);
	for (i = 0; i < n; i++)
		printf(" #%d= %d \n", i, x[i]);
}

void InsertionSort(int x[], int n)
{
	int i, j, tmp;

	for (i = 1; i < n; i++)
	{
		tmp = x[i];
		j = i;
		while(j > 0 && x[j - 1] > tmp)
		{
			x[j] = x[j - 1];
			j = j - 1;
		}
		x[j] = tmp;
	}
}

int main(void)
{
	int a[ARRAY_SIZE] = { 60, 20, 80, 30, 50, 10, 90, 55, 40, 70 };
	Output(a, ARRAY_SIZE, "원본출력");
	InsertionSort(a, ARRAY_SIZE);
	Output(a, ARRAY_SIZE, "\n 정렬후");
	return 0;
}