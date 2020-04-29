//c언어 코딩 :: 문자 여러개 입출력3

#include<stdio.h>

int main(void)
{
	char a, b;
	puts("------------------");
	puts(" **두문자 입출력");
	puts("------------------");

	printf("첫 번쨰 문자 입려: ");
	scanf_s("%c", &a, 1);

	printf("두 번쨰 문자입력:");
	while (getchar() != '\n');
	scanf_s("%c", &b, 1);
	
	

	printf("a=%c, b=%c \n", a, b);
	puts("------------------");
	puts("while(getchar()!=0은 입력 버퍼 비우기 입니다");
	puts("------------------");

	return 0;
}