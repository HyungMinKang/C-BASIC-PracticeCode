// ����ü ������� �� ����

#include<stdio.h>
#include<string.h>

typedef struct Book {
	char title[20];
	char author[20];
	int series;
}Book;

int main(void)
{
	Book b1 = { "�¹���", "������", 10 }, b2 = { "�� ��", "�ڰ渮",20 };
	Book tmp;

	puts("---------------------");
	puts(" *����ü ������� �� ���� *");
	puts("---------------------");

	printf("b1: %10s %10s %4d�� \n", b1.title, b1.author, b1.series);
	puts("---------------------");

	strcpy_s(b1.title, sizeof(b1.title), "�Ƹ���");
	b1.series = 12;

	puts(" **���� ��**");
	printf("b1: %10s %10s %4d�� \n", b1.title, b1.author, b1.series);
	puts("---------------------");

	puts("���ڿ��� ���ڹ迭 ����� ����");
	puts("---------------------");

	return 0;
}