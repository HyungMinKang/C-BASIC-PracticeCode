#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tuner[3];
	int i;
	for (i = 0; i < 3; i++)
		scanf("%d", &tuner[i]);

	for (i = 0; i < 3; i++)
	{
		if (tuner[i] <= 170)
		{
			printf("CRASH %d", tuner[i]);
			return 0;
		}
	}

	printf("PASS");
	return 0;


}