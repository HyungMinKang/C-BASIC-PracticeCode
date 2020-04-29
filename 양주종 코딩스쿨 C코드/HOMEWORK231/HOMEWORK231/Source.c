// const 상수와 매크로(macro)상수

#include <stdio.h>
#define MAX 10
#define P printf

int main()
{
	const int num = 5;
	int i;

	for (i = 0; i < MAX; i++)
	{
		P("i= %d, funny programming \n", i);
	}

	putchar('\n');
	for (i = 0; i < num; i++)
	{
		P("i=%d, fuuny programming \n", i);
	}

	return 0;
}