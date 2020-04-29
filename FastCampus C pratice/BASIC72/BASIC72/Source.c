#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%X", &n);
	if (n >= 10)
	{
		for (i = 1; i <16; i++)
		{
			printf("%X*%X=%X \n", n, i, n * i);
		}
	}
}