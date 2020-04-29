#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int time, score;
	scanf("%d %d", &time, &score);
	while (1)
	{
		if (time < 90)
		{
			score++;
			time += 5;
		}

		else
		{
			break;
		}
	}
	printf("%d", score);
}