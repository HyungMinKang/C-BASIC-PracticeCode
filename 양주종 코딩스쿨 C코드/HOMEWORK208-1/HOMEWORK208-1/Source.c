#include <stdio.h>

int main(void)
{
	char* a = "�߽ż�";
	char* b = "������";
	char* t;

	printf("�� �� a= %s, b=%s \n", a, b);

	t = a;
	a = b;
	b = t;

	printf("��ȯ�� a=%s, b=%s \n", a, b);

	return 0;
}