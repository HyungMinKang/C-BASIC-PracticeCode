// c언어 코딩 :: 정수 두개 입출력2 

#include<stdio.h>

int main(void)
{
	int a, b;
	puts("-----------------------");
	puts("** 정수 두 개 입출력 **");
	puts("------------------------");

	printf("첫 번째 정수 :");
	scanf_s("%d", &a);

	printf("두 번째 정수: ");
	scanf_s("%d", &b);

	printf("a=%d, b=%d \n", a, b);
	puts("-----------------------");

	return 0;
}