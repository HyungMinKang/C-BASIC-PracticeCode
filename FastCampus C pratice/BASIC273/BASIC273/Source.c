#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, m;

int max(int n, int m)
{
	return (n > m ? n  : m);
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", max(n, m));

	return 0;
}