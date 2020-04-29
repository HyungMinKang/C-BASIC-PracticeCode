#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	if (num <10)
		printf("small");
	else
		printf("big");
}