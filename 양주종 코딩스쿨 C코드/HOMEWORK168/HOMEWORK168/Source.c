#include <stdio.h>
#include <ctype.h>

int main(void)
{

	printf(isalnum('3') ? "%c�� ���ڳ� ������ \n" : "%c�� ���ڳ� ������ �ƴ� \n", '3');
	printf(isalnum('A') ? "%c�� ���ڳ� ������ \n" : "%c�� ���ڳ� ������ �ƴ� \n", 'A');
	printf(isalnum('k') ? "%c�� ���ڳ� ������ \n" : "%c�� ���ڳ� ������ �ƴ� \n", 'k');
	printf(isalnum('^') ? "%c�� ���ڳ� ������ \n" : "%c�� ���ڳ� ������ �ƴ� \n", '^');
	printf(isalnum('~') ? "%c�� ���ڳ� ������ \n" : "%c�� ���ڳ� ������ �ƴ� \n", '~');

	return 0;
}