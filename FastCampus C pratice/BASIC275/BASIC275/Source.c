#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m, x;

int max(int p, int q) { return p >= q ? p : q; }

int min(int p, int q) { return p < q ? p : q; }

int mid(int n, int m, int x)
{
	int a= max(max(n,m),x);
	int b = min(min(n, m), x);
	
	return (n + m + x) - (a + b);

	
}

int main()
{
	scanf("%d%d%d", &n, &m, &x);
	printf("%d\n", mid(n, m, x));
}
