#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char a8[10], a16[10], a2[10],a10[10];
	
	printf(" 100�� 8������ = %10s \n", itoa(100, a8, 8));
	printf(" 100�� 16������= %10s \n", itoa(100, a16, 16));
	printf(" 100�� 10������= %10s \n", itoa(100, a10, 10));
	printf(" 100�� 2������ = %10s \n", itoa(100, a2, 2));

	return 0;
}