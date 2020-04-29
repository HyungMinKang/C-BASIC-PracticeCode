#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int t, one, two;
	scanf("%d %d %d", &t, &one, &two);
	while (t < 90)
	{	
		one += 1;
		t += 5;
	}

	if (one > two)
		printf("win");
	else if (one == two)
		printf("same");
	else
		printf("lose");

	return 0;
}