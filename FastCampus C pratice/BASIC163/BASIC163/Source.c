#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	gets(str);
	int len = strlen(str);
	int i;
	for (i = 0; i <len; i++)
	{
		if (str[i] == ' ')
			continue;
		else
			printf("%c", str[i]);
	}

	return 0;
}