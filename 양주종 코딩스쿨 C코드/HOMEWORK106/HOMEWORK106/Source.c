// ����� ������-while��

#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	puts("------------");
	puts(" *while�� *");
	puts("------------");

	while (i <= 10)
	{
		sum += i;
		printf("i= %2d, sum=%2d \n", i, sum);
		i = i + 1;
	}

	puts("-----------------------------");
	puts(" ���� ����� i���ʱ�ȭ ����� �Ѵ�");
	puts(" while�� ���ο� i�� ���� ������Ų��");
	puts("--------------------------------");

	return 0;

}