#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numchange(int n)
{
	if (n == 1 )
	{
		printf("%d\n", n);
		return 0;
	}
	else if (n % 2 == 0)
	{	
		numchange(n / 2);
		printf("%d\n", n);
		
	}
	else
	{	
		numchange(3 * n + 1);
		printf("%d\n", n);
		
	}
}

int main(void)
{
	int num;
	scanf("%d", &num);
	numchange(num);
	return 0;
}