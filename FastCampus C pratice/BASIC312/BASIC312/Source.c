#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print(int n)
{
	if (n == 0)
		return 0;
	printf("*");

	return Print(--n);
}



void showtriangle(int n,int m)
{	
	if (n > m)
		return 0;
	Print(n);
	printf("\n");
	n++;
	showtriangle(n, m);
	
}

int main(void)
{
	int n=1, m;
	scanf("%d", &m);
	showtriangle(n,m);
}