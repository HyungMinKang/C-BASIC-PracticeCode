//c��� ����ü �����

#include <stdio.h>

typedef struct Mt
{
	char mount[20];
	int alt;
}Mt;

int main(void)
{
	Mt m1 = { "���ǻ�", 1708 }, m2;

	printf("���� ���� ���� :");
	gets(m2.mount);

	printf("�� ���� ���̴� : ");
	scanf_s("%d", &m2.alt);

	printf(" %s�� �ع� %dM \n", m1.mount, m1.alt);
	printf("%s�� �ع� %dM \n", m2.mount, m2.alt);

	puts(" m.alt���� .�� ��� ���� ������");

	return 0;
}