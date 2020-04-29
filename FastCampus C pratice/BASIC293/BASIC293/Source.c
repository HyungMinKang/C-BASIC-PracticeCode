#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int makeone(int n)
{	
	int res = 0;
	while (n / 10 != 0)
	{
		res = 0;
		while(1)
		{
			if (n % 10 == n)
			{
				res = res + n;
				break;
			}
			else
			{
				res = res + n % 10;
			}
			n = n / 10;
		}
		n = res;
	}
	return n;
}



int main(void)
{
	int  n;
	scanf("%d", &n);
	printf("%d", makeone(n));
}