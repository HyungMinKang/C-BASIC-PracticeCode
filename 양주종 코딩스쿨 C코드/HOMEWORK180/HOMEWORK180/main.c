#include <stdio.h>
#include <ctype.h>

int main(void)
{

	char* s = "A%^B#!C&~";
	
	while (*s != NULL)
	{
		printf(ispunct(*s) ? "%c�� ���ι��� \n" : "%c�� ���ι��� �ƴ� \n", *s);
		s++;
	}
	return 0;
}