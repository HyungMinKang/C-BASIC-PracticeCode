#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("두 정수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);
	printf("%d/%d의 몫=%d \n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지=%d \n", num1, num2, num1%num2);
	return 0;
}
