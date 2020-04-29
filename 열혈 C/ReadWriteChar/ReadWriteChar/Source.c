#include <stdio.h>

int main(void)
{
	int ch1, ch2;

	ch1 = getchar(); // 문자입력
	ch2 = fgetc(stdin); // 엔터키입력

	putchar(ch1); //문자출력
	fputc(ch2, stdout); //엔터 키 출력
	return 0;
}