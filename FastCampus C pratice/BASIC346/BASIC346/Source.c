#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, zerocount;
	int yut[4];
	char result[3];
	for (i = 0; i < 3; i++)
	{	
		zerocount = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &yut[i]);
			if (yut[i] == 0)
				zerocount++;
		}

		switch (zerocount)
		{
		case 0:
			result[i] = 'E';
			break;
		case 1:
			result[i] = 'A';
			break;
		case 2:
			result[i] = 'B';
			break;
		case 3:
			result[i] = 'C';
			break;
		case 4:
			result[i] = 'D';
			break;
		default:
			break;
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%c\n", result[i]);

	}

	return 0;
}