#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h, r, i, j,k;
	scanf("%d %d", &h, &r);
	for (i = 0; i < r; i++)
	{
		for (k = 0; k < 2 * h-1; k++)
		{
			for (j = 0; j <=k; j++)
			{	
				if (k <=(h+1)/2)
				{
					if (j==k)
						printf("*");
					else
						printf(" ");
				}

				else
				{
					if (k+j==2*h-2)
						printf("*");
					else
						printf(" ");
				}
			}
			printf("\n");
		}
	}
}