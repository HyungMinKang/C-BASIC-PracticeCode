#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

f(int n)
{
	int i;
	int div = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			div++;
	}
	if (div == 2)
		printf("prime");
	else
		printf("composite");

}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}