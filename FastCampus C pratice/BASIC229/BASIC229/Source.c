#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define A 300
#define B 60
#define C 10

int main()
{
	int T,i,j,k;
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	scanf("%d", &T);
	for (i = 0; i <= T / C; i++)
	{	
		for (j = 0; j <= T / B; j++)
		{
			for (k = 0; k <= T / A; k++)
			{
				if (C * i + B * j + A * k == T)
				{
					printf("%d %d %d", k, j, i);
					return 0;
				}

				
				
			}
		}
	}
	
	if (i == 0 && j == 0 && k == 0)
	{
		printf("0");
		return 0;
	}
	
	else
	{
		printf("-1");
	}
	return 0;


}