#include <stdio.h>
int sub1(void)
{
	printf(" sub1�Լ� => ���� ���� \n");
	return 100;
}

char sub2(void)
{
	printf(" sub2 �Լ� => ���� ���� \n");
	return 'k';
}

char* sub3(void)
{
	printf(" sub3�Լ� => ���ڿ� ���� \n");
	return "korea";
}

int sub4(void)
{
	printf(" sub4�Լ� => ���� ������ ���� \n");
	return 100, 200, 500, 0;
}

int main(void)
{
	int a;
	char b;
	char* c;
	int d;

	a = sub1();
	b = sub2();
	c = sub3();
	d = sub4();

	printf(" a= %d \n", a);
	printf(" b= %c \n", b);
	printf(" c =%s \n", c);
	printf(" d = %d \n", d);

	puts(" ������ ���ϵǾ ���������� ����");
	return 0;
}