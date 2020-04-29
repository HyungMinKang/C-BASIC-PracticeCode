#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[4];
	int i,cnt=0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 4; i++)
	{
		if (a[i] == 1)
			cnt++;
	}

	if (cnt == 1)
		printf("µµ");
	else if (cnt == 2)
		printf("°³");
	else if (cnt == 3)
		printf("°É");
	else if (cnt == 4)
		printf("À·");
	else
		printf("¸ð");

	return 0;
}