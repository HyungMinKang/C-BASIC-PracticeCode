#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, m, d, n, i;
	double res;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	res = a;
	for (i = 1; i < n; i++)
	{
		res = res * m;
		res = res + d;
	}
	printf("%d", (int)res);
}
