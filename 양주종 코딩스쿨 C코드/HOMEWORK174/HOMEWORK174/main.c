#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

int main(void)
{
	printf(isupper('a') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'a');
	printf(isupper('b') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'b');
	printf(isupper('F') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'F');
	printf(isupper('L') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'L');
	printf(isupper('$') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", '$');

	return 0;
}