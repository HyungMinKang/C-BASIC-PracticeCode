// 논리 뒤집기 연산자

#include<stdio.h>
int main(void)
{

	puts(" * !-논리NOT 연산자 * ");

	printf(" !1 = %d \n", !1);
	printf(" !0 = %d \n", !0);
	printf(" !6 = %d \n", !6);
	printf(" !-3 = %d \n", !- 3);
	printf(" !('K')= %d \n", !('k'));
	printf(" !(\"korea\") = %d \n", !("korea"));

	puts(" -----------------------------------");
	puts(" 값이 있으면 참 . 0, 0.0은 거짓");
	puts(" 참의 대표값 1, 거짓은 0");
	puts("-----------------------------------");
	return 0;
}