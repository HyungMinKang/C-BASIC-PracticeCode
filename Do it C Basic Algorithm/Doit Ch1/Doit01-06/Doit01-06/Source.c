/* 세 정수의 값을 입력하고 중앙값을 구합니다*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int med(int a, int b, int c)
{
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;

	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main(void)
{
	int a, b, c;
	printf("세 정수의 중앙값을 구합니다");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);

	printf("중앙값: %d \n", med(a, b, c));

	return 0;
}