//C��� ���� for��

#include <stdio.h>

int main(void)
{
	int i, j;

	puts("C��� ����for�� \n");

	for (i = 0; i < 3; i++)
	{
		printf("\n ===> i= %d, �ٱ��� for�� \n", i);
	
		for (j = 0; j < 5; j++)
		{
			printf("-> i=%d, j=%d \n", i, j);
		}
	
	}

	return 0;
	
}