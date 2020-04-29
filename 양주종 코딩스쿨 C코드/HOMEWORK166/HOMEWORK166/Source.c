#include <stdio.h>
#define ARRAY_SIZE 10

void Output(int x[], int n, char* msg)
{
	int i;
	puts(msg);
	for (i = 0; i < n; i++)
		printf(" #%d= %d \n", i, x[i]);
}

void quickSort(int x[], int L, int R)
{
	int i = L, j = R, tmp;
	int pivot = x[(L + R) / 2];

	while (i <= j)
	{
		while (x[i] < pivot)
			i++;
		while (x[j] > pivot)
			j--;
		
		if (i <= j)
		{
			tmp = x[i];
			x[i] = x[j];
			x[j] = tmp;
			i++, j--;
		}
	}
	if (L < j)
		quickSort(x, L, j);
	if (i < R)
		quickSort(x, i, R);
}

int main(void)
{
	int a[ARRAY_SIZE] = { 65,25,45,35,55,15,95,5,85,75 };
	Output(a, ARRAY_SIZE, "원본출력");
	quickSort(a, 0, ARRAY_SIZE - 1);
	Output(a, ARRAY_SIZE, "정렬후 출력");
	return 0;
}