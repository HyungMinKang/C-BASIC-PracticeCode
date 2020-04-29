#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	
	int arr[101] = { 0 };
	int res[101] = { 0 };
	int n,i,j=1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= n; i=i+2)
	{
		res[j] = (arr[i] < arr[i + 1] ? arr[i] : arr[i + 1]);
		j++;
	}

	for (i = 1; i <= n/2; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}