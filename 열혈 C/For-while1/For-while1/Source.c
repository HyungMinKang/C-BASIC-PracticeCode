#include <stdio.h>

int main(void)
{
	int i, sum=0;
	for (i = 0; i <= 100; i+=2)
		sum += i;
	printf("гу: %d", sum);
	return 0;
}