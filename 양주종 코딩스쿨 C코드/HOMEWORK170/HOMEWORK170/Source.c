#include <stdio.h>
#include <ctype.h>

int main(void)
{

	printf(iscntrl('\n') ? "%c�� ����� \n" : "%c�� ����� �ƴ� \n", '\\n');
	printf(iscntrl('\t') ? "%c�� ����� \n" : "%c�� ����� �ƴ� \n", '\\t');
	printf(iscntrl('\0') ? "%c�� ����� \n" : "%c�� ����� �ƴ� \n", '\\0');
	printf(iscntrl('4') ? "%c�� ����� \n" : "%c�� ����� �ƴ� \n", '4');
	printf(iscntrl('@') ? "%c�� ����� \n" : "%c�� ����� �ƴ� \n", '@');

	return 0;
}