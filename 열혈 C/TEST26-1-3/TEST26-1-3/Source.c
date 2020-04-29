#include <stdio.h>
#define MAX(x,y) ((x>y)? (x) : (y))

int main(void)
{
	int num1, num2;
	printf("두 정수 입력: \n");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 큰 값은 %d", num1, num2, MAX(num1, num2));
	return 0;
}