#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int p[3];
int f[2];

int min(int a, int b)
{
	return a < b ? a : b;
}


int main(void)
{	
	double minp = 0;
	double minf = 0;
	scanf("%d", &p[0]);
	scanf("%d", &p[1]);
	scanf("%d", &p[2]);
	scanf("%d", &f[0]);
	scanf("%d", &f[1]);

	minp = min(min(p[0], p[1]), p[2]);
	minf = min(f[0], f[1]);
	printf("%.1f", (minp + minf) * 110 / 100);
	return 0;
}