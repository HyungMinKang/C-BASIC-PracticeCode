#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int start, end;
	scanf("%d %d", &start, &end);
	int i = 1, j=1;
	for (i = start; i <= end; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d*%d=%d \n", i, j, i * j);
		}
	}

	return 0;

}