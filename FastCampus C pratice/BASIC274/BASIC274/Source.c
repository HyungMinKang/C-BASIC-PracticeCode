#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, m;

int min(int n, int m)
{
	return (n <m ? n : m);
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", min(n, m));

	return 0;
}