#include <stdio.h>

int main(void)
{
	char* a = "추신수";
	char* b = "김현수";
	char* t;

	printf("원 본 a= %s, b=%s \n", a, b);

	t = a;
	a = b;
	b = t;

	printf("교환후 a=%s, b=%s \n", a, b);

	return 0;
}