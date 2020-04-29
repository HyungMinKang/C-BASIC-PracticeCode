#include <stdio.h>

int main(void)
{
	int num;
	
	printf("숫자를 입력하세요:");
	scanf_s("%d", &num);
	printf("%d의 음수화 결과: %d \n", num, ~num + 1);
	return 0;
} 