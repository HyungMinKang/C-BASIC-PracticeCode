// C언어 포인터

#include <stdio.h>

int main(void)
{
	char a1[3][5];
	int b1[3][10];

	char* ap1 = a1;
	int* bp1 = b1;

	char(*ap2)[5] = a1; // 배열포인터
	int(*bp2)[10] = b1; // 배열포인터

	puts("\n C언어 포인트 \n\n");

	printf("a1=%d, a1+1=%d \n", a1, a1 + 1);
	printf("ap1=%d, ap1+1=%d \n", ap1, ap1 + 1);
	printf("ap2=%d, ap2+1=%d \n\n", ap2, ap2 + 1);

	printf("b1=%d, b1+1=%d \n", b1, b1 + 1);
	printf("bp1=%d bp1+1=%d \n", bp1, bp1 + 1);
	printf("bp2=%d, bp2+1=%d \n\n", bp2, bp2 + 1);

	printf("ap1=%d byte \n", sizeof(ap1));
	printf("ap2=%d byte \n", sizeof(ap2));
	printf("bp1=%d byte \n", sizeof(ap1));
	printf("bp2=%d byte \n", sizeof(bp2));

	return 0;
}