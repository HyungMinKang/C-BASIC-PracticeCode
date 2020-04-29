#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "0xA%^B#!C&~";
	while (*s != NULL)
	{
		printf(isxdigit(*s) ? "%c는 16진수 \n" : "%c는 16진수 아님\n", *s);
		s++;
	}
	return 0;
}