//�޸� �����Ҵ� (malloc, free �Լ�)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		puts("�����Ҵ����!!");
	}

	*p = 50;

	printf("a= %d �ּ� &a=%d \n", a, &a);
	printf("p=%d, �ּ� &p=%d \n", p, &p);
	printf("p�� ����Ű�� ��= %d \n", *p);

	free(p);

	return 0;
}
