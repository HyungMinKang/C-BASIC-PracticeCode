// �迭�� �����

#include <stdio.h>

int main(void)
{
	int i;
	int a[5];
	int n = sizeof(a) / sizeof(int);
	
	puts("-----------------------");
	puts(" �迭�� �����");
	puts("------------------------");

	printf(" [%d]���� ���� �Է� \n", n);
	puts("------------------------------");
	for (i = 0; i < n; i++)
	{
		printf("[%d]��° ����: ", i);
		scanf_s("%d", &a[i]);
	}
	puts("----------------------------");

	for (i = 0; i < n; i++)
		printf(" a[%d]= %2d, &a[%d]= %d \n", i, a[i], i, &a[i]);
	puts("------------------------------");

	puts(" �迭 index�� 0���� ����");
	puts("-------------------------");

	return 0;
}