// ����� ������- do~while��

#include <stdio.h>

int main(void)
{
	
	int i = 1, sum = 0;
	puts("-------------------");
	puts(" *do~while��* ");
	puts("--------------------");

	do {
		sum += i;
		printf(" i=%2d, sum=%2d \n", i, sum);
		i++;
	} while (i <= 10);

	puts("----------------------------------");
	puts(" �ϴ� �ѹ��� �����Ѵ�");
	puts(" do~while ���� ������ ���߿� üũ");
	puts("-----------------------------");

	return 0;
}