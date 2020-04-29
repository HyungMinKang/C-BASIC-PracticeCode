#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

Reload:
	scanf("%d", &n);

	if (n != 0)
	{
		printf("%d \n", n);
		goto Reload;
	}
	else
		return 0;
}