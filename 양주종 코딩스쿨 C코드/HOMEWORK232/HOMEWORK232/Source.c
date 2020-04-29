#include <stdio.h>

#define MAX(a,b) a>b ? a: b
#define MIN(a,b) a<b ? a: b
#define P printf

int main(void)
{
	P("%d %d중 큰 값: %d \n", 10, 50, MAX(10, 50));
	P("%d %d중 작은값: %d \n", 10, 50, MIN(10, 50));

	return 0;
}