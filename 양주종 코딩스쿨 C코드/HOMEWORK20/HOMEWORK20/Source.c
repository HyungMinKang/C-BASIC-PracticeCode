//c언어 코딩:: 정수와 문자열 입출력

#include <stdio.h>

int main(void)
{
	char town[20];
	int bus;

	puts("-------------------");
	puts(" **정수와 문자열 입출력 **");
	puts("-------------------");

	printf("무슨 동에 사세요: ");
	gets(town);

	printf("몇 번 타고 가세요: ");
	scanf_s("%d", &bus);
	printf("%s에 %d번 타고 가시네요 \n", town, bus);

	puts("-------------------");
	puts("town은 배열명이기에 &를 붙이지 않습니다");
	
	return 0;

}