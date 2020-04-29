#include <stdio.h>

int main(void)
{
	char str[] = { 'G','O','O','D',' ','T','I','M','E'};
	int arrLen = sizeof(str) / sizeof(char);
	int i;
	
	for (i = 0; i < arrLen; i++)
		printf("%c", str[i]);
	printf("\n");
	return 0;
} 