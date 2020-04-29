#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int xy[100][100] = { {0,}, };
	int k, i, j;
	int nulbi = 0;

	int square_num, input_1, input_2;

	scanf("%d", &square_num);
	fflush(stdin);


	for (k = 0; k < square_num; ++k)
	{
		scanf("%d %d", &input_1, &input_2);

		for (i = input_2 - 1; i < input_2 + 9; ++i)
		{
			for (j = input_1 - 1; j < input_1 + 9; ++j)
			{
				xy[i][j] += 1;
			}
		}
	}

	for (i = 0; i < 100; ++i)
	{
		for (j = 0; j < 100; ++j)
		{
			if (xy[i][j] >= 1)
			{
				nulbi += xy[i][j];
			}
			if (xy[i][j] > 1)
			{
				nulbi -= xy[i][j] - 1;
			}
		}
	}
	printf("%d", nulbi);
}
