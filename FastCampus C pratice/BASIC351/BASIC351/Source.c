#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m, s;
	int ds;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &ds);
	s = s + ds;
	m = m + s / 60;
	h = h + m / 60;
	
	
	s = s % 60;
	m = m % 60;
	h = h % 24;

	printf("%d %d %d", h, m, s);
}