#include <stdio.h>
#include <ctype.h>

int main(void)
{

	printf(isalnum('3') ? "%c은 숫자나 영문자 \n" : "%c은 숫자나 영문자 아님 \n", '3');
	printf(isalnum('A') ? "%c은 숫자나 영문자 \n" : "%c은 숫자나 영문자 아님 \n", 'A');
	printf(isalnum('k') ? "%c은 숫자나 영문자 \n" : "%c은 숫자나 영문자 아님 \n", 'k');
	printf(isalnum('^') ? "%c은 숫자나 영문자 \n" : "%c은 숫자나 영문자 아님 \n", '^');
	printf(isalnum('~') ? "%c은 숫자나 영문자 \n" : "%c은 숫자나 영문자 아님 \n", '~');

	return 0;
}