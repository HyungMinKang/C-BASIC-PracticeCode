// �迭�� ÷�ڱ��ϱ�

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 100,200,300,400,500 };
	int n = sizeof(a) / sizeof(int);

	puts("--------------------");
	puts(" �迭�� ÷�� ���ϱ� ");
	puts("---------------------");

	printf(" sizeof(a)= %d byte, sizeof(int)= %d byte \n", sizeof(a), sizeof(int));

	puts("--------------------------");

	for (i = 0; i < n; i++)
		printf(" a[%d]= %2d, &a[%d]= %d \n", i, a[i], i, &a[i]);
	puts("----------------------------");

	puts(" a�� 20����Ʈ, int�� 4����Ʈ ");
	puts(" ��ü�� �ϳ��� ������ ���Դϴ�");
	puts(" �ڷ� ���鼭 ������ ���ϴ� ");
	puts("------------------------------");

	return 0; 
}