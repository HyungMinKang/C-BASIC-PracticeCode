// continue ��

#include<stdio.h>

int main(void)
{
	int i;
	puts("----------------------");
	puts(" continue �� ");
	puts(" -----------------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf(" C���� ��մ�. : %d \n", i);
	}

	puts("---------------------------------");
	puts(" ������ ���� �Ǹ� �ǳʶڴ�. skip");
	puts(" break���� ���ϸ� ����");
	puts("--------------------------------");

	return 0;
}