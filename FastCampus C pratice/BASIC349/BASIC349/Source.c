#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int std[4];
int threecount[4];
int twocount[4];
int max2[4];
int main(void)
{
	int i,n,t=0;
	int index, count = 0;
	int max = -1;
	int s1, s2, s3;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &s1, &s2, &s3);
		std[1] += s1;
		std[2] += s2;
		std[3] += s3;
		if (s1 == 3)
			threecount[1]++;
		else if (s2 == 3)
			threecount[2]++;
		else if (s3 == 3)
			threecount[3]++;
		else if (s1 == 2)
			twocount[1]++;
		else if (s2 == 2)
			twocount[2]++;
		else if (s3 == 2)
			twocount[3]++;

	}
	for (i = 1; i <= 3; i++)
	{
		if (std[i] > max)
		{
			max = std[i];
			index = i;
		}
	}
	for (i = 1; i <= 3; i++)
	{
		if (std[i] == max)
		{	
			t++;
			max2[t] = i;
			
		}
	}
	
	if (t = 2)
	{	
		if (threecount[max2[1]] != threecount[max2[2]])
		{
			if (threecount[max2[1]] > threecount[max2[2]])
			{
				printf("%d %d", max2[1], max);
				return 0;
			}
			else if (threecount[max2[1]] < threecount[max2[2]])
			{
				printf("%d %d", max2[2], max);
				return 0;
			}
		}
		else
		{
			if (twocount[max2[1]] != twocount[max2[2]])
			{
				if (twocount[max2[1]] > twocount[max2[2]])
				{
					printf("%d %d", max2[1], max);
					return 0;
				}
				else if (twocount[max2[1]] < twocount[max2[2]])
				{
					printf("%d %d", max2[2], max);
					return 0;
				}
			}
			else
			{
				printf("%d %d", 0, max);
				return 0;
			}
		}
	}

	printf("%d %d", index, max);
	return 0;
}
