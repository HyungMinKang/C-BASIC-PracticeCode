//c��� �ڵ�:: ������ ���ڿ� �����

#include <stdio.h>

int main(void)
{
	char town[20];
	int bus;

	puts("-------------------");
	puts(" **������ ���ڿ� ����� **");
	puts("-------------------");

	printf("���� ���� �缼��: ");
	gets(town);

	printf("�� �� Ÿ�� ������: ");
	scanf_s("%d", &bus);
	printf("%s�� %d�� Ÿ�� ���ó׿� \n", town, bus);

	puts("-------------------");
	puts("town�� �迭���̱⿡ &�� ������ �ʽ��ϴ�");
	
	return 0;

}