// c언어 코딩 :: 문자 여러개 입출력4

#include <stdio.h>

int main(void)
{
	char a, b;
	puts("-------------------");
	puts("** 두문자 입출력 **");
	puts("-------------------");

	printf("첫 번째 문자 입력: ");
	a = getchar();

	printf("두 번쨰 문자 입력: ");
	while (getchar() != '\n');
	b = getchar();

	printf("a=%c,b=%c \n", a, b);
	puts("--------------------------");
	puts(" 문자만 입력시는 getchar 함수 추천");
	puts("----------------------------------");

	return 0;
	
}