#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	return x < y ? x : y;
}

#define P printf

int main(void)
{
	P("%d %d중 큰 값: %d \n", 10, 50, max(10, 50));
	P("%d %d중 작은 값: %d \n", 10, 50, min(10, 50));

	return 0;
}