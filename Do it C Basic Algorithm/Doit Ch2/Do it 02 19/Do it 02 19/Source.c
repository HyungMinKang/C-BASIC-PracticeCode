#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	unsigned long counter = 0;
	for (n = 2; n <= 1000; n++)
	{
		for (i = 2; i < n; i++)
		{
			counter++;
			if (n % i == 0)
				break;
		}
		if (n == i)
			printf("%d\n", n);
	}
	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö: %lu \n", counter);

	return 0;
}