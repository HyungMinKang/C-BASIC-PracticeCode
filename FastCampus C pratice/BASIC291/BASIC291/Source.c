#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* mysubstr(char* str, int start, int count)
{
	int i;
	for (i = start; i < start+count; i++)
	{
		printf("%c", str[i]);
	}

}

int main(void)
{	
	int start, count;
	char str[100];
	gets(str);
	scanf("%d %d", &start, &count);

	mysubstr(str, start, count);
}