//���ڹ迭�� �����

#include <stdio.h>

int main(void)
{
	char city[5][20];
	int i, n;
	n = sizeof(city) / sizeof(char[20]);

	puts("------------------------");
	puts(" **���ڿ��迭 �����**");
	puts("------------------------");

	for (i = 0; i < n; i++)
	{
		printf("[%d]���� ���ø�: ", i);
		gets(city[i]);
	}

	printf(" \n *[%d]���� ���ø� ���* \n", n);
	puts("------------------------");
	for (i = 0; i < n; i++)
		printf("city[%d] = %s�� \n", i, city[i]);

	puts("------------------------");
	puts(" char[20]���� 5�� ���� 2���� �迭");
	puts("------------------------");
	
	return 0;
}