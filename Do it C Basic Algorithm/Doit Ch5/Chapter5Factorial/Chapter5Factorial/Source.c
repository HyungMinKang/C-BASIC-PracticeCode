/*순차곱셈의 결과를 재귀적으로 구한다(재귀적 함수를 통해 펙토리얼 구현)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return n * (factorial(n - 1));
	else
		return 1;
}

int main(void)
{
	int x;
	printf("정수를 입력하세요.: ");
	scanf("%d", &x);
	printf("%d!(factorial)= %d\n", x, factorial(x));
	return 0;
}

