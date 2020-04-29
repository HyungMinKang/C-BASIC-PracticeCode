#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int arr[201];
long long fibonacci(int n)
{ 
	if (arr[n] != 0)
		return arr[n];

	else if (n == 1 || n == 2)
		return arr[n]=1;
	else
		return arr[n]= (fibonacci(n - 1)+ fibonacci(n - 2))%10009;
}

int main(void)
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", fibonacci(n));
	return 0;
}
 
/* 모범코드
#include <stdio.h>

int memo[201];

int f(int k)
{
	if (memo[k]) return memo[k];
	if (k <= 2) return 1;
	return memo[k] = ( f(k-1) + f(k-2) ) % 10009;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));

	return 0;
}



*/