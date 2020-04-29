//c언어 코딩 :: 한문자 출력 putchar 

#include <stdio.h>

int main(void)
{
	puts("한 문자 출력* ");
	putchar('A');
	putchar('B');
	putchar('\t');
	putchar('a');
	putchar('b');
	putchar('\n');
	putchar('0');
	putchar('1');
	putchar('\n');

	puts("putchar 함수는 한 문자 출력 전용함수");
	return 0;

}