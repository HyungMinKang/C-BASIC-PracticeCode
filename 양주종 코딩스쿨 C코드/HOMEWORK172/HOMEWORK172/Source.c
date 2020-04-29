#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

int main(void)
{
	printf(isgraph('8')? "%c은 그래픽 문자 \n": "%c은 그래픽문자 아님\n", '8');
	printf(isgraph('$') ? "%c는 그래픽 문자 \n" : "%c은 그래픽문자 아님\n", '$');
	printf(isgraph('F') ? "%c는 그래픽 문자 \n" : "%c는 그래픽문자 아님 \n", 'F');
	printf(isgraph('\n') ? "%c은 그래픽 문자 \n" : "%c은 그래픽문자 아님 \n", '\\n');
	printf(isgraph('\0') ? "%c는 그래픽문자 \n" : "%c는 그래픽 문자 아님 \n", '\\0');
	system("pause");
	return 0;
}