// 별찍기 준비

#include <stdio.h>

int main(void)
{
	int i, j;
	puts("----------------------");
	puts(" *별 찍기 -1 * ");
	puts(" ---------------------");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf(" * ");
		}
		putchar('\n');
	}

	puts("--------------------");
	puts(" 행을 제어하는 i");
	puts(" 열을 제어하는 j");
	puts(" ---------------------");

	return 0; 
}