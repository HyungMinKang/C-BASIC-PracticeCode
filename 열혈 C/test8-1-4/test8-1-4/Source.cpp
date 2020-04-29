#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;
	printf("두 수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);

	result = num1 - num2 > 0 ? num1 - num2 : (num1 - num2) * -1;


	printf("두 수의 차: %d", result);
	return 0;

}