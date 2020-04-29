#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	char a[501];
	gets(a);
	int n = strlen(a);
	int  sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)a[i];
	}

	if (sum % 3 == 0)
		printf("1");
	else
		printf("0");
}