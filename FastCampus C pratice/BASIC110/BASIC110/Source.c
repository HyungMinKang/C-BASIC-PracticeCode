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
		printf("��");
	else if (cnt == 2)
		printf("��");
	else if (cnt == 3)
		printf("��");
	else if (cnt == 4)
		printf("��");
	else
		printf("��");

	return 0;
}