#include <stdio.h>
void sub(int n)
{
	if (n == 0)
	{
		return 1;
	}
	sub(n - 1);
	printf(" n= %d, &n=%d \n", n, &n);
}

int main(void)
{
	puts(" main start");

	sub(3);

	puts(" main end");
	
	return 0;
}