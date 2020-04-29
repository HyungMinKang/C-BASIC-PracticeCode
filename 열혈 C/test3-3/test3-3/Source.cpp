#include <stdio.h>

int main(void)
{
	int num;
	int result;
	printf("숫자를 입력하세요");
	scanf_s("%d", &num);
	result = num * num;
	printf("%d의 제곱의결과= %d", num, result);
	
	return 0;

}