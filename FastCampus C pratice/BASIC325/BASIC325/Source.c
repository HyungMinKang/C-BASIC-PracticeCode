#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char idf[16];

int main(void)
{	
	int i;
	fgets(idf, 16, stdin);

	if (idf[7] == '1' || idf[7] == '3')
	{
		if (idf[7] == '1')
		{
			printf("19%c%c/%c%c/%c%c %c", idf[0], idf[1], idf[2], idf[3], idf[4], idf[5], 'M');
		}
		else
		{
			printf("20%c%c/%c%c/%c%c %c", idf[0], idf[1], idf[2], idf[3], idf[4], idf[5], 'M');
		}
	}
	else
	{
		if (idf[7] == '2')
		{
			printf("19%c%c/%c%c/%c%c %c", idf[0], idf[1], idf[2], idf[3], idf[4], idf[5], 'F');
		}
		else
		{
			printf("20%c%c/%c%c/%c%c %c", idf[0], idf[1], idf[2], idf[3], idf[4], idf[5], 'F');
		}
	}

	return 0;
}