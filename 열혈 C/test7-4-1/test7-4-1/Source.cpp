#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total;
	
	
	printf("두 개의 정수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);

	for (total=0; num1 <= num2; num1++)
		total += num1;

	
	printf("합: %d \n", total);
	return 0;
}