//float vs double2

#include <stdio.h>

int main(void)
{
	int i;
	double sum = 0.0;

	puts("---------------------");
	puts(" *double*");
	puts("---------------------");

	for (i = 0; i < 100; i++)
	{
		sum += 1.7;
	}

	printf("double sum=%lf \n", sum);
	puts("---------------------");

	puts("�Ҽ��� 2�ڸ������� ���");
	printf("double sum= %.2lf \n", sum);
	puts("---------------------");
	puts("�����̴�. 4byte�� 8byte�� ���̴�");
	puts("---------------------");

	return 0;
}