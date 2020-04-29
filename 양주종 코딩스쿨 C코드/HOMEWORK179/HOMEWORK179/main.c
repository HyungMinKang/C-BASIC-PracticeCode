#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "A B C a b c";

	while (*s != NULL)
	{
		printf(" %c ==> %d \n", *s, isblank(*s));
		s++;
	}
	return 0; 
}