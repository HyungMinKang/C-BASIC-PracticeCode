//c��� �ڵ� :: �������� �����

#include<stdio.h>

int main(void)
{
	char name[20];
	int year;
	char btype;
	float vision;

	puts("-------------------");
	puts(" **���� ���� ����� **");
	puts("-------------------");

	printf("�� ��: ");
	gets(name);

	printf("��� �⵵: ");
	scanf_s("%d", &year);

	printf("������: ");
	while (getchar() != '\n');
	btype = getchar();

	printf("��ս÷�: ");
	scanf_s("%f", &vision);

	printf("%s�� %d���, %c��, �÷��� %.1f \n", name, year, btype, vision);

	puts("-------------------");
	puts(" %s %d �� ���Ĺ��ڿ� �����ϼ���");
	puts("-------------------");

	return 0;
}