//C��� main�Լ��� �μ�

#include <stdio.h>

int main(int x, char* y[])
{
	int i;

	printf(" main �Լ� �μ��� ����: %d�� \n", x);

	for (i = 0; i < x; i++)
	{
		printf(" %d���� �μ� ==> %s \n", i, y[i]);
	}

	return 0;
}