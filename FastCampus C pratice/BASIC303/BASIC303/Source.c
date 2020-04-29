#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum;
int add(int n)
{	
	
	if (n == 1)
		return sum += 1;
	else
	{
		sum += n;
		add(n - 1);
	}
	return sum;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", add(n));
	return 0;
}