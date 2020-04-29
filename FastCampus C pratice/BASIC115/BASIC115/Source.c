#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a + b <= c)
		printf("»ï°¢Çü¾Æ´Ô");
	
	else if (a == b && b == c)
		printf("Á¤»ï°¢Çü");
	else if (a == b || b == c || a == c)
		printf("ÀÌµîº¯»ï°¢Çü");
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("Á÷°¢»ï°¢Çü");

	else
		printf("»ï°¢Çü");


}