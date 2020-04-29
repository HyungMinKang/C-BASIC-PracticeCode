#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                                                                                                                                                                                                                                                            
#define  ARRAY_SIZE 100001



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
	int i,n;
	int a[ARRAY_SIZE] ;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	

	quickSort(a, 0, n-1 );
	
	for (i = 0; i < n; i++)
	{
		printf("%d \n", a[i]);
	}

	

	return 0;
}