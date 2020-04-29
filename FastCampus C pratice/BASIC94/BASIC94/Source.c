#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	
	if (num % 7 == 0)
		printf("multiple");
	else
		printf("not multiple");

	return 0;
}