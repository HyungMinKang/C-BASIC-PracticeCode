// c언어코딩:: 정수 두개 입출력 1

#include <stdio.h>

int main(void)
{
	int a, b;
	puts("---------------------");
	puts(" ** 정수 두 개 입출력 **");
	puts("------------------------");

	printf("정수 두 개 입력 : ");
	scanf_s("%d %d", &a, &b);
	
	printf("a=%d, b=%d \n", a, b);
	puts("-----------------------------");
	puts(" 엔터, 탭, 스페이스등으로두 값을 구분합니다.");
	puts("------------------------------");

	return 0;

}