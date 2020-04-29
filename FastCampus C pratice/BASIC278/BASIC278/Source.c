#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a, n;

long long int pow(int a, int n)
{	
	long long int res = 1;
	int i;
	if (a == 1)
		return 1;
	else
	{
		for (i = 0; i < n; i++)
		{
			res = res * a;
		}
	}
	return res;
}

int main()
{
	scanf("%d%d", &a, &n);
	printf("%lld\n", pow(a, n));
}
