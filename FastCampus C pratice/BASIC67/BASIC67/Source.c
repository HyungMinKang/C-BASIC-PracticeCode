#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char x, t = 'a';
	scanf("%c", &x);
	do {
		printf("%c ", t);
		t++;
	} while (t< x + 1);

	return 0;

}