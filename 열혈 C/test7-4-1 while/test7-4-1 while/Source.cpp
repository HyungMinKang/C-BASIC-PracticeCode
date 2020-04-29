#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total=0;
	
	printf("두 정수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);

	while (num1 <= num2)
	{
		total += num1;
		num1++;
	}
	printf("합: %d", total);
}
