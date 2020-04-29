#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recur(int x)
{
	if (x ==0)
		return ;
	else
	{
		printf("%d \n", x);
		recur(x - 1);
		
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	recur(n);
	return 0;
}