#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력값이 0보다 작습니다 \n");

	if (num > 0)
		printf("입력값이 0보다 큽니다 \n");

	if (num == 0)
		printf("입력 값은 0이다");

	return 0;
}