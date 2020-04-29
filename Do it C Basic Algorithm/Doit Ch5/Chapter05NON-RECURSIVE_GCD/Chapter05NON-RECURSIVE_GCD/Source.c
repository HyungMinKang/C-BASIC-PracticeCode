#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, i;
	int div = 0;
	printf("정수 입력: ");
	scanf("%d %d", &x, &y);
	for (i = (x > y) ? y : x; i >0 ; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			printf("최대공약수 %d", i);
			return 0;
		}
	}
	return 0;
}


/*
int gcd(int x,int y)
{
	int temp;
	while(y!=0)
	{
		temp=y;
		y=y%x;
		x=temp;
	}
	return x;
}
*/