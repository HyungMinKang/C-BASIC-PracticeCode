// 삼항연산자
#include <stdio.h>
int main(void)
{
	int a;
	puts(" *삼항 연산자* ");

	printf(" 정수를 입력하시오. : ");
	scanf_s("%d", &a);

	if (a % 2)
		printf("%d는 홀수입니다. \n", a);
	else
		printf("%d는 짝수입니다. \n", a);

	puts(" ----------------------------------");
	puts(" 2로 나누어 나머지가 0이면 짝수, 1이면 홀수");
	puts(" 홀수는 참, 짝수는 거짓");
	puts("-----------------------------------");
	return 0;
}