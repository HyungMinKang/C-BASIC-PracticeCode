//���ڿ� ����, �±�ȯ

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[10] = "�߽ż�";
	char b[10] = "������";
	char t[10];

	printf("�� �� a=%s, b=%s \n", a, b);

	strcpy_s(t, sizeof(t), a);
	strcpy_s(a, sizeof(a), b);
	strcpy_s(b, sizeof(b), t);

	printf(" ��ȯ�� a=%s, b=%s \n", a, b);

	return 0;
}