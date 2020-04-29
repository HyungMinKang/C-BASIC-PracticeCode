#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b, sum = 0;
	scanf("%d %d", &a,&b);
	int i;
	for (i = a; i <= b; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}

	printf("%d", sum);
}