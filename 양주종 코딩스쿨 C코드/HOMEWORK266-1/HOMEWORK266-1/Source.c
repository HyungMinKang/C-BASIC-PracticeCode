#include <stdio.h>

int main(void)
{
	char a1[3];
	int b1[3];

	char* ap1 = a1;
	int* bp1 = b1;

	puts("\n C언어 포인터 왜 중요한가? \n\n");

	printf("a1=%d, a1+1=%d \n", a1, a1 + 1);
	printf("ap1=%d, ap1+1=%d \n\n", ap1, ap1 + 1);

	printf("b1=%d, b1+1=%d \n", b1, b1 + 1);
	printf("bp1=%d, bp1+1=%d \n\n", bp1, bp1 + 1);

	return 0;
}