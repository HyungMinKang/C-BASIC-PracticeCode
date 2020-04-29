#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf(isdigit('8') ? "%c은 숫자 \n" : "%c은 숫자 아님 \n", '8');
	printf(isdigit('8') ? "%c은 숫자 \n" : "%c은 숫자 아님 \n", '5');
	printf(isdigit('9') ? "%c은 숫자 \n" : "%c은 숫자 아님 \n", '9');
	printf(isdigit('^') ? "%c은 숫자 \n" : "%c은 숫자 아님 \n", '^');
	printf(isdigit('K') ? "%c은 숫자 \n" : "%c은 숫자 아님 \n", 'K');
	return 0;
}