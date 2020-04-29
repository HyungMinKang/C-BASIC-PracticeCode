#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long n = 4199999999;
	char a8[33], a16[33], a2[33], a10[33];

	printf("4199999999를 8진수로 = %33s \n", ultoa(n, a8, 8));
	printf("4199999999를 16진수로= %33s \n", ultoa(n, a16, 16));
	printf(" 4199999999를 10진수로 = %33s \n", ultoa(n, a10, 10));
	printf("4199999999를 2진수로 = %33s \n", ultoa(n, a2, 2));

	return 0; 
}