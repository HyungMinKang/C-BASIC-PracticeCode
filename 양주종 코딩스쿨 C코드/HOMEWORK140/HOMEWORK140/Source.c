// fputc �Լ�
#include <stdio.h>
int main(void)
{
	puts(" * fputc �Լ� * ");
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
	puts(" stdout�� ǥ������� �ǹ�");
	puts(" standard output ����͸� �ǹ�");
	puts(" ��� ���� ��������� ������� �Ѵ�");
	puts("--------------------------------");
	return 0;
}