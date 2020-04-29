#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf(isalpha('3') ? "%c은 알파벳 \n" : "%c은 알파벳 아님 \n", '3');
	printf(isalpha('A') ? "%c은 알파벳 \n" : "%c은 알파벳 아님 \n", 'A');
	printf(isalpha('k') ? "%c은 알파벳 \n" : "%c은 알파벳 아님 \n", 'k');
	printf(isalpha('^') ? "%c은 알파벳 \n" : "%c은 알파벳 아님 \n", '^');
	printf(isalpha('~') ? "%c은 알파벳 \n" : "%c은 알파벳 아님 \n", '~');

	return 0;
}