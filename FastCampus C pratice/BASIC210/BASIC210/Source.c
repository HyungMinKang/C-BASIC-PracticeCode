#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, k;
	int arr[101] = { 0 };
	int a, b, c;
	int sum = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
	
		arr[a] = arr[a] + c;
		arr[b+ 1] = arr[b + 1] - c;
	}

	for (int i = 1; i <= n; i++)
	{
		
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		sum = sum + arr[i];
		printf("%d ", sum);
	}

	return 0;

}