#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char d[30];
	scanf("%s", d);
	int i = 0;
	while (d[i] != '\0')
	{
		printf("\'%c\'", d[i]);
		i++;
	}
	return 0;
}