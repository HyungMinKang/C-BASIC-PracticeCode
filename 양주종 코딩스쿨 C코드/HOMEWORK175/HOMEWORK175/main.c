#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "korea c program";

	while (*s != NULL)
	{
		printf(isspace(*s) ? "���� \n" : "%c�� ����\n", *s);
		s++;
	}

	return 0;
}