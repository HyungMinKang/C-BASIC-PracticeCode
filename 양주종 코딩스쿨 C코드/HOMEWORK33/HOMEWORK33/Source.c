// �׸��� ��ħ(overflow)

#include <stdio.h>

int main(void)
{

	signed char a = 100;
	signed char b = 200;
	unsigned char c = 250;
	unsigned char d = -50;

	puts("-----------------------");
	puts(" *�׸��� ��ħ(overflow) *");
	puts("-----------------------");

	printf("a= %d, b= %d, c=%d, d=%d \n", a, b, c, d);
	puts("-----------------------");

	puts("���� ���� signed char�� -128~127");
	puts(" unsigned char�� 0~255 �����ϸ� signed");
	puts("-----------------------");
	
	return 0;
}