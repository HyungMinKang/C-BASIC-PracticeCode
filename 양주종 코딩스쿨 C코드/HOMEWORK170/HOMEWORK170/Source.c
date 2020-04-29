#include <stdio.h>
#include <ctype.h>

int main(void)
{

	printf(iscntrl('\n') ? "%c은 제어문자 \n" : "%c은 제어문자 아님 \n", '\\n');
	printf(iscntrl('\t') ? "%c은 제어문자 \n" : "%c은 제어문자 아님 \n", '\\t');
	printf(iscntrl('\0') ? "%c는 제어문자 \n" : "%c은 제어문자 아님 \n", '\\0');
	printf(iscntrl('4') ? "%c는 제어문자 \n" : "%c은 제어문자 아님 \n", '4');
	printf(iscntrl('@') ? "%c는 제어문자 \n" : "%c은 제어문자 아님 \n", '@');

	return 0;
}