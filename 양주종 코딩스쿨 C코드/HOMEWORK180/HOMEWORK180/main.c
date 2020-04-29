#include <stdio.h>
#include <ctype.h>

int main(void)
{

	char* s = "A%^B#!C&~";
	
	while (*s != NULL)
	{
		printf(ispunct(*s) ? "%c는 구두문자 \n" : "%c는 구두문자 아님 \n", *s);
		s++;
	}
	return 0;
}