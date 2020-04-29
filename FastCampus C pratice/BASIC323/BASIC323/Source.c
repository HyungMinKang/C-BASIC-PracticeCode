#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char str[10001];
	fgets(str, 10001, stdin);
	int len = strlen(str);
	for (i = len - 1; i >= 0; i--)
		printf("%c", str[i]);

	return 0;
}