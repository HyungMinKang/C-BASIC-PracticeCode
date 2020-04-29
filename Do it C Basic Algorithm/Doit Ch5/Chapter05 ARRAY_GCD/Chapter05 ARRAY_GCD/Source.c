#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int gcdarray(int a[], int start, int n)
{
	if (n == 1)
		return a[start];
	else if (n == 2)
		return gcd(a[start], a[start+1]);
	else
		return ( gcd(a[start], gcdarray(a, start+1, n - 1)));

}

int main(void)
{
	int* x;
	int nx;
	printf("요소개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++)
	{
		scanf("%d", &x[i]);
	}
	printf("배열의 최대공약수: %d", gcdarray(x, 0, nx));
	free(x);
	return 0;
}