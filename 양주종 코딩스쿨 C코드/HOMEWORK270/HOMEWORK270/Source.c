// ���� ���ϱ� rand, srand

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i;
	srand((unsigned)time(NULL));

	puts("\n ���� ���ϱ� \n");

	for (i = 0; i <= 6; i++)
	{
		printf("%d���� ����: %d \n", i, (rand() % 45) + 1);
	}

	return 0;
}