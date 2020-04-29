#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y, m;
	scanf("%d %d", &y, &m);

	if (m == 2)
	{
		if (y % 4 == 0 && y % 100 != 0)
		{
			printf("29");
		}
		else if (y % 400 == 0)
		{
			printf("29");

		}
		else
		{
			printf("28");
		}
	}

	else if (m==1 ||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		printf("31");
	}
	else
	{
		printf("30");
	}
}