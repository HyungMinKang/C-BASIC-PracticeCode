// �����迭�� ����

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 100,200,300,400,500 };
	int n = sizeof(a) / sizeof(int);

	puts("-----------------");
	puts(" �����迭�� ����");
	puts("-----------------");

	printf("sizeof(a)= %d byte, a= %d \n", sizeof(a), a);
	puts("----------------------");

	for (i = 0; i < n; i++)
		printf("a[%d]= %2d, &a[%d]= %d \n", i, a[i], i, &a[i]);
	puts("-----------------------------");

	puts(" �迭�� ������ �ڷ������� �����̴�");
	puts("�迭���� �����ּҸ� ���� ����̴�");
	puts("----------------------------------");

	return 0; 
}