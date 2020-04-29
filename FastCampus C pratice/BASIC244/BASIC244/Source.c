#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	int arr[1001];
	int n, i, j, tmp, g,cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	
	for (i = 0; i < n; i++)
	{
		g = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				g++;
			}
		}
		if (g == 0)
		{
			cnt = i;
			break;
		}
			
	}
	

	printf("%d", cnt);
}