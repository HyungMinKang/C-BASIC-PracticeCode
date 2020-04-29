// 이중 for문

#include <stdio.h>

int main()
{
	int i, j;
	
	puts("------------------");
	puts(" *이중 for문 * ");
	puts(" -------------------");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("i=%d, j=%d, (안쪽for문) \n", i, j);
		}
		printf("\t i=%d j=%d(바깥쪽for문) \n\n", i, j);
		puts("------------------------------------");
	}

	puts(" 빨리 도는 것은 안쪽 루프 ");
	puts(" 천천히 도는 것은 바깥쪽 루프 ");
	puts(" i와 j의 변화 주시");
	puts("-----------------------------------");
	return 0; 
}