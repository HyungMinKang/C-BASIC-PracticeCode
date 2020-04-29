#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "APPLE GOOGLE SAMSUNG";

	while (*s != NULL)
	{
		printf("%c", tolower(*s));
		s++;
	}
	return 0; 
}