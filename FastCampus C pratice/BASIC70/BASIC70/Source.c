#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i=0;
	int sum = 0;
	scanf("%d", &n);
	while (1)
	{	
		if (sum >= n)
		{
			printf("%d", i);
			break;
		}
		i++;
		sum += i;
		
	}
}