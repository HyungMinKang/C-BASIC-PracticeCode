/* 입력받은 정수값의 부호(양수/음수/0) 판단*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf(" 정수를 입력하세요: ");
	scanf("%d", &n);
	if (n > 0)
		printf("양수");
	else if (n < 0)
		printf("음수");
	else
		printf("0");

	return 0;
}