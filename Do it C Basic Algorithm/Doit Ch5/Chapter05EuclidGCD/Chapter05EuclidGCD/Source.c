#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void)
{
	int x, y;
	puts("두 정수의 최대공약수를 구합니다");
	printf("Input number1:");
	scanf("%d", &x);
	printf("Input number2: ");
	scanf("%d", &y);
	printf("%d,%d의 최대공약수: %d\n", x, y, gcd(x, y));
	return 0;
}