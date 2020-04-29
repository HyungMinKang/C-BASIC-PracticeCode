#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int x[51][51] = { 0 };


void rotatepstr()
{
	int i, j;
	for (i = 1; i <= 50; i++)
		x[1][i] = 1;
	for (j = 1; j <= 50; j++)
		x[j][1] = 1;
	
	for (i = 2; i <= 50; i++)
		for (j = 2; j <= 50; j++)
			x[i][j] =( x[i - 1][j] + x[i][j - 1])%100000000;
}


int main(void)
{
	int r, c;
	scanf("%d %d", &r, &c);
	rotatepstr();
	
	printf("%lld", (x[r][c]) % 100000000);
	
	return 0;
}