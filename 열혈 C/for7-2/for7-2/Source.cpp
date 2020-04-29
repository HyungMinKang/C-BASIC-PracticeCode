#include <stdio.h>

int main(void)
{
	int input;
	int num;
	printf("정수를 입력하세요:");
	scanf_s("%d", &input);
	
	for (num = 1; num < input+1; num++)
		printf("%d \n", 3 * num);

	return 0;
}