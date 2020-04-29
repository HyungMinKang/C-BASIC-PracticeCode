//C언어 이중 for문

#include <stdio.h>

int main(void)
{
	int i, j;

	puts("C언어 이중for문 \n");

	for (i = 0; i < 3; i++)
	{
		printf("\n ===> i= %d, 바깥쪽 for문 \n", i);
	
		for (j = 0; j < 5; j++)
		{
			printf("-> i=%d, j=%d \n", i, j);
		}
	
	}

	return 0;
	
}