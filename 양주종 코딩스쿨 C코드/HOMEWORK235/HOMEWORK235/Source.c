// ���� �迭�� �ʱ�ȭ

#include <stdio.h>

int main(void)
{
	int a[5];
	int b[5] = {0,};
	int c[5] = {0};
	int i;

	puts("�迭 a[5] ");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d \n", i, a[i]);
	}

	puts("\n �迭b[5]={0}, ���");
	for (i = 0; i < 5; i++)
	{
		printf("b[%d]=%d \n", i, b[i]);
	}

	puts("\n c[5]={0}�� ���");
	for (i = 0; i < 5; i++)
	{
		printf("c[%d]= %d \n", i, c[i]);
	}

	return 0;
}