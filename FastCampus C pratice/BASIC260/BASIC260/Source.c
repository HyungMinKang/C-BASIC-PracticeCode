#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

char grade(int n)
{
	if (n >= 90)
		return 'A';
	else if (n >= 80 && n < 90)
		return 'B';
	else if (n >= 70 && n < 80)
		return 'C';
	else if (n >= 60 && n < 70)
		return 'D';
	else
		return 'F';
}

int main()
{
	scanf("%d", &n);
	printf("%c", grade(n));
	return 0;
}