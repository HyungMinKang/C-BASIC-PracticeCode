// ���ڿ� ���ͷ�(literal)�� ����

#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "Africa";

	printf("a= %s \n", a);

	strcpy_s(a, sizeof(a), "April");
	printf("a= %s \n", a);

	printf("���ڿ�= %s \n", "America");

	return 0;
}