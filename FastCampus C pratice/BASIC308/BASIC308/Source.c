#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dd(int num)
{
	if (num ==1 || num==0)
		printf("1");
	else
	{
		return dd(num / 2);
		printf("%d", num % 2);
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", dd(n));
	return 0;
}