// ASCII CODE ����

#include<stdio.h>

int main(void)
{
	int i;
	puts(" ** ASCII CODE ���� **");
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