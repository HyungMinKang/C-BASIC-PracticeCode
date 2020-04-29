#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;
	printf("세 정수를 입력하세요");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연살결과: %d \n", result);
	return 0;
}