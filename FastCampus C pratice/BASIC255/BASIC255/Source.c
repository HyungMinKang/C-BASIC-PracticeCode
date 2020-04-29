#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
f(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("love \n");
	}
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}