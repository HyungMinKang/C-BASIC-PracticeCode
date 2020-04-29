#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int two(int n)
{

	if (n == 0 || n == 1)
		printf("%d", n);
	else 
	{
		two(n/2);
		printf("%d", n % 2);
	}	
}

int main()
{
	int num;
	
	scanf("%d", &num);
	two(num);
	return 0;
}