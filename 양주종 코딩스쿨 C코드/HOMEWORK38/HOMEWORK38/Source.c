// 구조체 멤버변수 값 변경

#include<stdio.h>
#include<string.h>

typedef struct Book {
	char title[20];
	char author[20];
	int series;
}Book;

int main(void)
{
	Book b1 = { "태백산맥", "조정래", 10 }, b2 = { "토 지", "박경리",20 };
	Book tmp;

	puts("---------------------");
	puts(" *구조체 멤버변수 값 변경 *");
	puts("---------------------");

	printf("b1: %10s %10s %4d권 \n", b1.title, b1.author, b1.series);
	puts("---------------------");

	strcpy_s(b1.title, sizeof(b1.title), "아리랑");
	b1.series = 12;

	puts(" **변경 후**");
	printf("b1: %10s %10s %4d권 \n", b1.title, b1.author, b1.series);
	puts("---------------------");

	puts("문자열은 문자배열 변경과 동일");
	puts("---------------------");

	return 0;
}