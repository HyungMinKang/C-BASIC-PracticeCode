// 구조체 초기화

#include <stdio.h>

typedef struct Book {
	char title[20];
	char author[20];
	int series;
}Book;

int main(void)
{
	Book b1 = { "태백산맨", "조정래", 10 }, b2 = { "토  지", "박경리",20 };

	puts("-----------------------");
	puts("*구조체 출력 *");
	puts("-----------------------");

	printf("b1: %10s %10s %4d권 \n", b1.title, b1.author, b1.series);
	printf("b1: %10s %10s %4d권 \n", b2.title, b2.author, b2.series);
	puts("-----------------------");

	puts("b1.title에서 .는 멤버접근 연산자");
	puts("-----------------------");

	return 0;
}