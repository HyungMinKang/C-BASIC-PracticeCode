#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int peoplesum[10];
int main(void)
{
	int i;
	int sum = 0;
	int onpeople, offpeople;
	int max = -1;
	for (i = 0; i < 10; i++)
	{
		scanf("%d %d", &offpeople ,&onpeople);
		sum += onpeople;
		sum -= offpeople;
		peoplesum[i] = sum;
		if (peoplesum[i] > max)
			max = peoplesum[i];
	}

	printf("%d", max);
	return 0;


}