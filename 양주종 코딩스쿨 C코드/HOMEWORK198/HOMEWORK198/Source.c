// �޸� �����Ҵ�(malloc, free �Լ�)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	printf(" ó���� ������ ���� : ");
	scanf_s("%d", &n);

	int* p = (int*)malloc(sizeof(int) * n);
	if (p == NULL)
	{
		puts(" �����Ҵ� ���� !!! ");
	}

	printf("%d���� ���� �Է� \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]�� �� ����: ", i);
		scanf_s("%d", p + i);
	}

	printf("\n %d�� ���� ��� \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d] ==> %d \n", i, *(p+i));
	}

	free(p);
	return 0;
}