#include <stdio.h>
#include <ctype.h>

int main(void) {

	char* s = "linux programming";

	while (*s != NULL)
	{
		printf("%c", toupper(*s));
		s++;
	}
	return 0;
}
