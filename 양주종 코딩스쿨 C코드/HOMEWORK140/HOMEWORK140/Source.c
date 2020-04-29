// fputc 함수
#include <stdio.h>
int main(void)
{
	puts(" * fputc 함수 * ");
	putchar('A');
	putchar('B');
	putchar('C');
	putchar('\n');
	fputc('A', stdout);
	fputc('B', stdout);
	fputc('C', stdout);

	putchar(97);
	putchar(98);
	putchar(99);
	putchar('\n');
	fputc(97, stdout);
	fputc(98, stdout);
	fputc(99, stdout);

	puts("\n -------------------------------------");
	puts(" stdout은 표준출력을 의미");
	puts(" standard output 모니터를 의미");
	puts(" 어느 곳에 출력하지를 정해줘야 한다");
	puts("--------------------------------");
	return 0;
}