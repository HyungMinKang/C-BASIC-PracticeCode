//scanf 함수 공백 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b=0;
	puts(" scanf 함수 공백활용 \n");
	printf("첫번째 문자 입력: ");
	scanf("%c", &a);

	printf("두번쨰 문자입력: ");
	//fflush(stdin);
	while ((b != getchar() == '\n'));
	scanf("%c", &b);
	
	printf("a=%c, b=%c \n", a, b);

	return 0;
}