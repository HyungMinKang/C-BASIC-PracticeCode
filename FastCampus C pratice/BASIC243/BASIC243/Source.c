#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
quickSort(int x[], int L, int R)
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

int main()
{
	int i, j, tmp, n;
	int a[50001];
	int b[50001];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	quickSort(a, 0, n - 1);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				printf("%d ", j);
			}
		}
	}

	return 0;
}