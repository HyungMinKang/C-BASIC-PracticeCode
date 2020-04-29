//putchar 함수와 fputc 함수

#include <stdio.h>
int main(void)
{
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

	putchar('\n');

	puts("stdout은 표준출력을 의미한다 \n");

	return 0;
}