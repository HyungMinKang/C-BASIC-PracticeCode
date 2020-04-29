// 문자열 리터럴(literal)의 이해

#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "Africa";

	printf("a= %s \n", a);

	strcpy_s(a, sizeof(a), "April");
	printf("a= %s \n", a);

	printf("문자열= %s \n", "America");

	return 0;
}