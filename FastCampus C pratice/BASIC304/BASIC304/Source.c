#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int k)
{
	if (k == 1) return 1;
	else return f(k - 1) + k;

}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}