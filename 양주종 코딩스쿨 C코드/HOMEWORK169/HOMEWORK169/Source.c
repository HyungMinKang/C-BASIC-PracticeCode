#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf(isalpha('3') ? "%c�� ���ĺ� \n" : "%c�� ���ĺ� �ƴ� \n", '3');
	printf(isalpha('A') ? "%c�� ���ĺ� \n" : "%c�� ���ĺ� �ƴ� \n", 'A');
	printf(isalpha('k') ? "%c�� ���ĺ� \n" : "%c�� ���ĺ� �ƴ� \n", 'k');
	printf(isalpha('^') ? "%c�� ���ĺ� \n" : "%c�� ���ĺ� �ƴ� \n", '^');
	printf(isalpha('~') ? "%c�� ���ĺ� \n" : "%c�� ���ĺ� �ƴ� \n", '~');

	return 0;
}