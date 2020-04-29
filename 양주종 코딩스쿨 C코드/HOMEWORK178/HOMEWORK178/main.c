#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char* s = "ABCDE abcde";

	while (*s != NULL)
	{
		printf("%c ==> %d \n", *s, __toascii(*s));
		s++;
	}
	return 0; 
}
