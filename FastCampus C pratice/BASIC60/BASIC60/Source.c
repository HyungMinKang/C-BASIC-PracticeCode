#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	
	int score;
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("%c", 'A');
	}
	else if (70<= score &&score< 90)
	{
		printf("%c", 'B');
	}
	else if (40 <= score&& score < 70)
	{
		printf("%c", 'C');
	}
	else {
		printf("%c", 'D');
	}
	return 0;
}