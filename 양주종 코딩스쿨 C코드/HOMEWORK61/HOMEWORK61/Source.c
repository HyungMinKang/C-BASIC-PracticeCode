//2��-01 �����迭 �ʱ�ȭ

#include <stdio.h>
int main()
{
	int a[] = { 65,25,45,35,55 };
	int i, n;
	n = sizeof(a) / sizeof(int);

	puts("---------------------");
	puts(" **�����迭 �ʱ�ȭ **");
	puts("---------------------");

	for (i = 0; i < n; i++)
		printf("a[%d]= %d \n", i, a[i]);

	puts("������ ���� �ʾƵ� �ڵ����� ���");
	puts("---------------------");

	return 0;
}