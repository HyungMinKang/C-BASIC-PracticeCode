#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "0xA%^B#!C&~";
	while (*s != NULL)
	{
		printf(isxdigit(*s) ? "%c�� 16���� \n" : "%c�� 16���� �ƴ�\n", *s);
		s++;
	}
	return 0;
}