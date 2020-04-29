#include <stdio.h>

int myabs(int a)
{
	if (a >= 0)
		return a;
	else
		return a * -1;
}

main()
{
	int a;
	scanf("%d", &a);
	printf("%d", myabs(a));
}
