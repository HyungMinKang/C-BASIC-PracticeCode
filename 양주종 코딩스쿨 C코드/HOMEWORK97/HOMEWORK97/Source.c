// ���ڿ��� �����

#include <stdio.h>
#include <string.h>

int main(void)
{
	char company[20], nation[20];

	puts("----------------------");
	puts(" *���ڿ��� �����* ");
	puts("-----------------------");

	printf(" �ٹ��ϰ� ���� ȸ��� : ");
	gets(company);

	printf(" �����ϰ� ���� �����: ");
	gets(nation);

	printf(" ȸ��: %s, ����: %s \n", company, nation);
	puts("--------------------------------");

	puts("scanf�Լ��� ������ ������ �Է�����");
	puts(" ���ڿ� �Է��� gets�Լ� ��õ");
	puts("---------------------------------");

	return 0;
}