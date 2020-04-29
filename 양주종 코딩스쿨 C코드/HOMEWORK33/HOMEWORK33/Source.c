// 그릇의 넘침(overflow)

#include <stdio.h>

int main(void)
{

	signed char a = 100;
	signed char b = 200;
	unsigned char c = 250;
	unsigned char d = -50;

	puts("-----------------------");
	puts(" *그릇의 넘침(overflow) *");
	puts("-----------------------");

	printf("a= %d, b= %d, c=%d, d=%d \n", a, b, c, d);
	puts("-----------------------");

	puts("값의 범위 signed char는 -128~127");
	puts(" unsigned char는 0~255 생략하면 signed");
	puts("-----------------------");
	
	return 0;
}