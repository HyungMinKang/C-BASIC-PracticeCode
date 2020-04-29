/* 세 정수 값을 입력하고 최댓값을 구합니다*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, c;
	int max; // 최대값
	printf("세 정수의 최댓값을 구합니다 \n");
	printf("a의 값 : "); scanf("%d", &a);
	printf("b의 값 : "); scanf("%d", &b);
	printf("c의 값 : "); scanf("%d", &c);

	//최대값 구하기
	max = a;
	if (b > max)max = b;
	if (c > max)max = c; 
	// 최대값을 구해서 max에 대입

	printf("최대값은 %d 입니다 \n", max);
	
	return 0;
}