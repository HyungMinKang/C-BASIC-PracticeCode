#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000000001];
int main()
{
	
	int t;
	
	int n, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		arr[t] = 1;
	}

	
	scanf("%d", &m);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d", t);
		printf("%d ", arr[t]);
		
	}

	return 0;
}