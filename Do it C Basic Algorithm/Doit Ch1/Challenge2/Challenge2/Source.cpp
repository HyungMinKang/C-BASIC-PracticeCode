#include <stdio.h>
void GuGudan(int num1, int num2)
{
	int i;
	while (num1 <= num2)
	{
		for (i = 1; i < 10; i++)
			printf("%d*%d=%d \n", num1, i, num1 * i);
		printf("\n");
		num1++;

	}
}

int main(void)
{    
	int num1, num2;
	printf("몇 단 부터 몇단?");
	scanf_s("%d %d", &num1, &num2);
	if (num1 < num2)
		GuGudan(num1, num2);
	else
		GuGudan(num2, num1);
	return 0;
}