#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;
	printf("두 수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		result = num1 - num2;

	else if (num1 < num2)
		result = (num1 - num2) * -1;
	else
		result = 0;

	
	printf("두 수의 차: %d", result);
	return 0;

}