//scanf �Լ� ���� Ȱ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b=0;
	puts(" scanf �Լ� ����Ȱ�� \n");
	printf("ù��° ���� �Է�: ");
	scanf("%c", &a);

	printf("�ι��� �����Է�: ");
	//fflush(stdin);
	while ((b != getchar() == '\n'));
	scanf("%c", &b);
	
	printf("a=%c, b=%c \n", a, b);

	return 0;
}