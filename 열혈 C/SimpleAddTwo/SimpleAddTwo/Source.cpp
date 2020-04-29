#include<stdio.h>

int main(void)
{
	int num1=3;//변수 num1 선언및 초기화
	int num2=4;//변수 num2 선언및 초기화
	int result = num1 + num2; //변수 result 선언및 초기화

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, result);
	return 0;
}