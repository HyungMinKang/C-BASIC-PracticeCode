// 난수 구하기 rand, srand

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i;
	srand((unsigned)time(NULL));

	puts("\n 난수 구하기 \n");

	for (i = 0; i <= 6; i++)
	{
		printf("%d번쨰 난수: %d \n", i, (rand() % 45) + 1);
	}

	return 0;
}