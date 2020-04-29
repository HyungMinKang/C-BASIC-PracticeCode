#include <stdio.h>

int main()
{
	int bread = 500;
	int coke = 400;
	int snack = 700;
	int money;
	int i, j, k;

	printf("현재 당신이 소유하고 있는 금액:");
	scanf_s("%d", &money);

	for (i = 1; i < money / bread; i++)
	{
		for (j = 1; j < money / coke; j++)
		{
			for (k = 1; k < money / snack; k++)
			{
				if (bread * i + coke * j + snack * k == money)
				{
					printf("크림빵: %d개 ", i);
					printf("콜라: %d개 ", j);
					printf("새우깡: %d개\n", k);
				}
			}
		
		}

	}
	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}