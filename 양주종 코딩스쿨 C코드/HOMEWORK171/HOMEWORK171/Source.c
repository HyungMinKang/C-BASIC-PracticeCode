#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf(isdigit('8') ? "%c�� ���� \n" : "%c�� ���� �ƴ� \n", '8');
	printf(isdigit('8') ? "%c�� ���� \n" : "%c�� ���� �ƴ� \n", '5');
	printf(isdigit('9') ? "%c�� ���� \n" : "%c�� ���� �ƴ� \n", '9');
	printf(isdigit('^') ? "%c�� ���� \n" : "%c�� ���� �ƴ� \n", '^');
	printf(isdigit('K') ? "%c�� ���� \n" : "%c�� ���� �ƴ� \n", 'K');
	return 0;
}