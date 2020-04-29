#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, ox,i,adds=0;
	int scoresum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ox);
		if (ox == 0)
		{
			adds = 0;
		}
		else
		{
			ox = ox + adds;
			scoresum += ox;
			adds++;
		}
	}
	printf("%d", scoresum);
	return 0;
}