//C��� inline �Լ�

#include <stdio.h>

int func1(int x)
{
	return x * x;
}

inline int func2(int x)
{
	return x * x;
}

int main(void)
{
	int i;

	puts(" \n * �Ϲ� �Լ� \n");
	for (i = 0; i <= 100; i++)
	{
		printf("i=%3d, func1(%3d)= %6d \n", i, i, func1(i));
	}

	puts("\n *inline �Լ� \n");
	for (i = 0; i <=100; i++)
	{
		printf("i=%3d, func2(%3d)=%6d \n", i, i, func2(i));
	}

	return 0;
}