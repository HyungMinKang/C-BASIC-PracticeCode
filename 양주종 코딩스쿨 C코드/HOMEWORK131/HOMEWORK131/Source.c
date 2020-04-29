// 논리연산자

#include <stdio.h>
int main(void)
{
	printf(" 0 || 0 = %d \n", 0 || 0);
	printf(" 0 || 1 = %d \n", 0 || 1);
	printf(" 0 && 0 = %d \n", 0 && 0);
	printf(" 0 && 1 = %d \n", 0 && 1);

	printf("\n !0= %d \n", !0);
	printf(" !1= %d \n", !1);
	printf(" !5 = %d \n", !5);

	puts(" \n---------------------------");
	puts(" 값이 있음면 참, 0이면 거짓이다");
	puts(" 대표적으로 참은 1, 거짓은 0");
	puts("------------------------------");

	return 0;
}