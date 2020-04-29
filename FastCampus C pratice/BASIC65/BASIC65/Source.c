#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 1;
	while (n != 0)
	{
		scanf("%d", &n);
		
		if (n == 0)
			break;
		else
			printf("%d \n", n);
	}
}