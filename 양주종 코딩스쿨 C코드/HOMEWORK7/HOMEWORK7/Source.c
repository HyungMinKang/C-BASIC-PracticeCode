// C언어코딩 :: printf 문자 출력

#include <stdio.h>

int main(void)
{

	puts(" *문자 출력 *");
	printf("%c, %c, %c \n", 'A', 'B', 'S');

	printf("%%c는 character 형태로 출력하라 \n");
	printf("putchar 함수는 문자전용 출력함수 \n");
	printf("printf 함수는 여러 형식 출력함수 \n");

	return 0;
}