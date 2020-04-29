#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d", &n);

	
reget:
	scanf("%d", &m);
	printf("%d \n", m);
	n--;
	
	if (n != 0)
		goto reget;

	else
		return 0;
}