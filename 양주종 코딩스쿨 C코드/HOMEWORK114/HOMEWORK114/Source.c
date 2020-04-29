// 별찍기-2 

#include <stdio.h>

int main(void)
{
	int i, j;
	puts("-----------------------");
	puts(" ** 별 찍기 -2 ** ");
	puts(" ----------------------");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" * ");
		}

		putchar('\n');
	}

	puts("-----------------");
	puts(" 행을 제어하는 i ");
	puts(" 열을 제어하는 j ");
	puts("------------------");

	return 0;
}