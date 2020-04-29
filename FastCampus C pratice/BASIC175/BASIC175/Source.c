#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char id[11];
	gets(id);
	
	printf("welcome! %s", id);
}