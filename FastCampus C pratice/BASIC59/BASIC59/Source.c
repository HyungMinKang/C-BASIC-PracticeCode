#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);

	if (a > 0)
	{
		if (a % 2 == 0)
		{
			printf("%s\n", "plus");
			printf("%s \n","even");
		}
		else {
			printf("%s\n", "plus");
			printf("%s \n", "odd");
		}
	}

	else
	{
		if (a % 2 == 0)
		{
			printf("%s\n", "minus");
			printf("%s \n", "even");
		}
		else {
			printf("%s\n", "minus");
			printf("%s \n", "odd");
		}
	}

	return 0;

}