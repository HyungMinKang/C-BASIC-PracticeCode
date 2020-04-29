// 별찍기-4

#include <stdio.h>

int main()
{

	int i, j;
	puts("-------------------");
	puts(" ** 별 찍기-4 ** ");
	puts(" ------------------");

	for (i = 0 ; i < 5; i++)
	{
		for (j = 5; j >= i + 1; j--)
		{
			printf(" * ");
		}
		putchar('\n');
	}

	puts("---------------------");
	puts(" 행을 제어하는 i");
	puts(" 열을 제어하는 j");
	puts("----------------------");

	return 0;
}