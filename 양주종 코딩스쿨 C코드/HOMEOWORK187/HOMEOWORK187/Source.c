#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long n = 4199999999;
	char a8[33], a16[33], a2[33], a10[33];

	printf("4199999999�� 8������ = %33s \n", ultoa(n, a8, 8));
	printf("4199999999�� 16������= %33s \n", ultoa(n, a16, 16));
	printf(" 4199999999�� 10������ = %33s \n", ultoa(n, a10, 10));
	printf("4199999999�� 2������ = %33s \n", ultoa(n, a2, 2));

	return 0; 
}