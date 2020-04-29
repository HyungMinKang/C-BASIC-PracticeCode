#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char* s = "ABab\n\t";
	while (*s != NULL)
	{
		printf(isprint(*s) ? "%c는 프린트 가능\n" : "%c는 프린트 불가능 \n", *s);
		s++;
	}
	return 0;
}