//문자열 대입, 맞교환

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[10] = "추신수";
	char b[10] = "김현수";
	char t[10];

	printf("원 본 a=%s, b=%s \n", a, b);

	strcpy_s(t, sizeof(t), a);
	strcpy_s(a, sizeof(a), b);
	strcpy_s(b, sizeof(b), t);

	printf(" 교환후 a=%s, b=%s \n", a, b);

	return 0;
}