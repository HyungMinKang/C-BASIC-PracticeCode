// goto문

#include <stdio.h>

int main(void)
{
	char i = 65;

	puts("----------------");
	puts(" ** goto문 ** ");
	puts("----------------");

To:
	putchar(i++);
	if (i < 91)
		goto To;

	puts(" \n---------------------------------");
	puts(" To: 이정표이다");
	puts(" goto TO; To이정표로 가라");
	puts(" goto문은 무조건 분기문이다.");
	puts("--------------------------------------");
	return 0;
}