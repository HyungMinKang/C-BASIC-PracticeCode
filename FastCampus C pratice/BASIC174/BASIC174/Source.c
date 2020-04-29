#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	gets(a);
	int n = strlen(a);
	if (n<=3 && a[0]=='I'&&a[1]=='O'&&a[2]=='I')
		puts("IOI is the International Olympiad in Informatics.");
	else
		puts("I don't care.");

	return 0;
}