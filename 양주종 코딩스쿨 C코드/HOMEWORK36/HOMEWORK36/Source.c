// ����ü �ʱ�ȭ

#include <stdio.h>

typedef struct Book {
	char title[20];
	char author[20];
	int series;
}Book;

int main(void)
{
	Book b1 = { "�¹���", "������", 10 }, b2 = { "��  ��", "�ڰ渮",20 };

	puts("-----------------------");
	puts("*����ü ��� *");
	puts("-----------------------");

	printf("b1: %10s %10s %4d�� \n", b1.title, b1.author, b1.series);
	printf("b1: %10s %10s %4d�� \n", b2.title, b2.author, b2.series);
	puts("-----------------------");

	puts("b1.title���� .�� ������� ������");
	puts("-----------------------");

	return 0;
}