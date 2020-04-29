// 삼항연산자

#include <stdio.h>
int main(void)
{
	int a;
	puts(" ** 삼항 연산자 ** ");

	printf(" 정수를 입력하시오 : ");
	scanf_s("%d", &a);

	printf(a % 2 ? "%d는 홀수 \n" : "%d는 짝수 \n", a);

	puts("------------------------------");
	puts(" 한 문장으로 해결");
	puts("------------------------------");
	return 0;
}