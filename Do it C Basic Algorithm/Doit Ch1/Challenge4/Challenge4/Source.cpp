#include <stdio.h>

int main()
{
	int bread = 500;
	int coke = 400;
	int snack = 700;
	int money;
	int i, j, k;

	printf("���� ����� �����ϰ� �ִ� �ݾ�:");
	scanf_s("%d", &money);

	for (i = 1; i < money / bread; i++)
	{
		for (j = 1; j < money / coke; j++)
		{
			for (k = 1; k < money / snack; k++)
			{
				if (bread * i + coke * j + snack * k == money)
				{
					printf("ũ����: %d�� ", i);
					printf("�ݶ�: %d�� ", j);
					printf("�����: %d��\n", k);
				}
			}
		
		}

	}
	printf("��� �����Ͻðڽ��ϱ�? \n");
	return 0;
}