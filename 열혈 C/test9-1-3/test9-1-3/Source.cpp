#include <stdio.h>

void Fibnonacci(int num)
{
	int n1=0 , n2=1, n3, i;

	if (num == 1)
		printf("%d ", n1);
	else
		printf("%d %d ", n1, n2);

	for (i=0; i<num-2; i++)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
}

int main(void)
{
	int n;
	printf("ǥ���ϰ��� �ϴ� �Ǻ���ġ ���� �� �Է�: ");
	scanf_s("%d", &n);

	if (n < 1)
	{
		printf("1���� ū ���� �Է��ϼ��� \n");
		return -1;
	}
	
	Fibnonacci(n);
	return 0;
}
