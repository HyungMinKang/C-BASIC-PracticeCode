// ASCII CODE 보기

#include<stdio.h>

int main(void)
{
	int i;
	puts(" ** ASCII CODE 보기 **");
	for (i = 0; i < 27; i++)
	{
		printf("%d => %c \n", i, i);
	}

	for (i = 27; i < 128; i++)
	{
		printf("%d => %c \n", i, i);
	}

	return 0;
}