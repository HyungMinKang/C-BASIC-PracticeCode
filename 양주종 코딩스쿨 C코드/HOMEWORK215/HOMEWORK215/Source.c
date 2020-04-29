// 스택(STACK) 구조 확인

#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	puts(" 번지수 확인");
	printf("a= %d addr==> %d \n", a, &a);
	printf("b= %d addr==> %d \n", b, &b);
	printf("c= %d addr==> %d \n", c, &c);

	return 0;
}