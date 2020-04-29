// c언어코딩 :: 문자 입출력 1

#include<stdio.h>

int main(void)
{
	char btype;
	puts("------------------");
	puts(" ** 문자 입출력 ** ");
	puts("------------------");

	printf("혈액형을 입력하세요 : ");
	// scanf_s("%c", &btype, 1);
	
	btype=getchar();

	printf(" 당신의 혈액형은 %c형입니다. \n", btype);
	puts("-------------------------------");
	puts("문자 입력은 scanf(%c), getchar 두가지 방식이 있습니다");
	puts("---------------------------------------");

	return 0;

}