// ���ڹ迭�� �������

#include <stdio.h>
int main(void)
{
	char a[] = "apple";
	char b[6] = { 'a','p','p','l','e','\0' };

	int i;

	puts("a �迭");
	for (i = 0; i < 6; i++)
	{
		printf("a[%d]=%c, ����=%d \n", i, a[i], &a[i]);
	}

	puts("\n b�迭");
	for (i = 0; i < 6; i++)
	{
		printf("b[%d]=%c, ����=%d \n", i, b[i], &b[i]);
	}

	return 0;
}