#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int lotto[7];
	int per[6];
	int i,j;
	int bonus = 0, cnt = 0;
	for (i = 0; i < 7; i++)
		scanf("%d", &lotto[i]);

	for (j = 0; j < 6; j++)
		scanf("%d", &per[j]);

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (lotto[i] == per[j])
			{
				if (i == 6)
				{
					bonus = 1;
					break;
				}
				cnt++;
			}
		}
	}

	if (cnt == 6)
	{
		printf("1");
	}
	else if (cnt == 5 && bonus == 1)
	{
		printf("2");

	}
	else if (cnt == 5)
	{
		printf("3");
	}
	else if (cnt == 4)
	{
		printf("4");
	}
	else if (cnt == 3)
	{
		printf("5");
	}
	else
	{
		printf("0");
	}
}