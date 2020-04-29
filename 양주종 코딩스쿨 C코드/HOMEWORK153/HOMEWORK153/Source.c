#include <stdio.h>
int sub1(void)
{
	printf(" sub1함수 => 정수 리턴 \n");
	return 100;
}

char sub2(void)
{
	printf(" sub2 함수 => 문자 리턴 \n");
	return 'k';
}

char* sub3(void)
{
	printf(" sub3함수 => 문자열 리턴 \n");
	return "korea";
}

int sub4(void)
{
	printf(" sub4함수 => 정수 여러개 리턴 \n");
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

	puts(" 여러개 리턴되어도 마지막값만 전달");
	return 0;
}