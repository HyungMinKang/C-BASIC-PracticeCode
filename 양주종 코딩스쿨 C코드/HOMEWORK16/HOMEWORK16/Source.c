//c��� �ڵ� :: ���� ������ �����3

#include<stdio.h>

int main(void)
{
	char a, b;
	puts("------------------");
	puts(" **�ι��� �����");
	puts("------------------");

	printf("ù ���� ���� �Է�: ");
	scanf_s("%c", &a, 1);

	printf("�� ���� �����Է�:");
	while (getchar() != '\n');
	scanf_s("%c", &b, 1);
	
	

	printf("a=%c, b=%c \n", a, b);
	puts("------------------");
	puts("while(getchar()!=0�� �Է� ���� ���� �Դϴ�");
	puts("------------------");

	return 0;
}