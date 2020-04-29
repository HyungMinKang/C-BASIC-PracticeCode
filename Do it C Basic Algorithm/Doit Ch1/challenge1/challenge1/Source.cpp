#include <stdio.h>

int main(void)
{   
	int num;
	printf("10진수 입력:");
	scanf_s("%d", &num);
	printf("10진수 %d= 16진수 %x", num, num);
}