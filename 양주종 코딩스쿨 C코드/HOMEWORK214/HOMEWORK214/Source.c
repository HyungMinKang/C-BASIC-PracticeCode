// �ƽ�Ű�ڵ�(ASCII CODE)����

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 27;i++)
	{
		printf(" %3d ==> %c \n", i, i);
	}

	for (i = 27; i < 128; i++)
	{
		printf(" %3d ==> %c \n", i, i);
	}
	return 0;
}