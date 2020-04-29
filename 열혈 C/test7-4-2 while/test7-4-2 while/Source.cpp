#include <stdio.h>

int main(void)
{
	int num=1;
	int input;
	int result = 1;
	printf("ÆåÅä¸®¾ó:");
	scanf_s("%d", &input);

	do
	{
		result = result * num;
		num++;
	} while (num <= input);

	printf("%d!= %d", input, result);
	return 0;
}