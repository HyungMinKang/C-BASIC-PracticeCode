#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char* s = "ABab\n\t";
	while (*s != NULL)
	{
		printf(isprint(*s) ? "%c�� ����Ʈ ����\n" : "%c�� ����Ʈ �Ұ��� \n", *s);
		s++;
	}
	return 0;
}