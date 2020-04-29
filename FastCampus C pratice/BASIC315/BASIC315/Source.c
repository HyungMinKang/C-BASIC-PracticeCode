#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int da[301];
int arr[301];

int max(int a, int b)
{
	return a > b ? a : b;
}


int main(void)
{
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	da[0] = arr[0];
	da[1] = max(arr[0], arr[0] + arr[1]);
	da[2] = max(arr[1] + arr[2], arr[0] + arr[2]);
	for (i = 3; i < N; i++)
	{
		da[i] = max(arr[i] + arr[i - 1]+da[i-3], arr[i] + da[i - 2]);
	}

	printf("%d", da[N - 1]);
	return 0;
}


/*모범코드
#include <stdio.h>

int memo[333];
int s[333];

int max(int a, int b) { return a > b ? a : b; }

int f(int k)
{
	if(k < 1) return 0;
	if(memo[k]) return memo[k];
	if(k == 1) return memo[1] = s[1];
	if(k == 2) return memo[2] = s[1] + s[2];
	return memo[k] = max( f(k-3) + s[k-1], f(k-2) ) + s[k];
}

int main ()
{
	int n;
	int i;

	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &s[i]);

	printf("%d", f(n));

	return 0;
}


*/