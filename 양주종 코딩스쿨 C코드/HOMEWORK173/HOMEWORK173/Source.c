#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

int main(void)
{
	printf(islower('a') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", 'a');
	printf(islower('b') ? "%c는 소문자 \n" : "%c는 소문자 아님 \n", 'b');
	printf(islower('F') ? "%c은 소문자 \n" : "%c는 소문자 아님 \n", 'F');
	printf(islower('L') ? "%c은 소문자 \n" : "%c는 소문자 아님 \n", 'L');
	printf(islower('$') ? "%c는 소문자 \n" : "%c는 소문자 아님 \n", '$');

	system("pause");
	return 0;
}