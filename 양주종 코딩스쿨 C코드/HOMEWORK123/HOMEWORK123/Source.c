// goto��

#include <stdio.h>

int main(void)
{
	char i = 65;

	puts("----------------");
	puts(" ** goto�� ** ");
	puts("----------------");

To:
	putchar(i++);
	if (i < 91)
		goto To;

	puts(" \n---------------------------------");
	puts(" To: ����ǥ�̴�");
	puts(" goto TO; To����ǥ�� ����");
	puts(" goto���� ������ �б⹮�̴�.");
	puts("--------------------------------------");
	return 0;
}