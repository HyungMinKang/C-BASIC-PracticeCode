#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[20];
	printf("정수입력: ");
	scanf_s("%s", &str, sizeof(str));
	printf("%d \n", atoi(str));

	printf("실수입력: ");
	scanf_s("%s", &str, sizeof(str));
	printf("%g \n", atof(str));

}