#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int i,j;
	while (1)
	{
		scanf("%d", &n);
		if (n >= 1 && n <= 9)
			break;
		
	}
	
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < n * i ; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}

}