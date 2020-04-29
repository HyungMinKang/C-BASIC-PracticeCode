#include<stdio.h>
#define ADD(X,Y,Z) ((X)+(Y)+(Z))
#define MULTIPLE(X,Y,Z) ((X)*(Y)*(Z))

int main(void)
{
	int num1, num2, num3;
	printf("세 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("세 정수 합: %d", ADD(num1,num2,num3));
	printf("세 정수 곱: %d", MULTIPLE(num1, num2, num3));
	return 0;

}