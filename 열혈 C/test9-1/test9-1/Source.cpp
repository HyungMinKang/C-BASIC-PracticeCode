#include <stdio.h>

int Maxsel(int num1, int num2, int num3)
{
	if (num1 > num2)
		return(num1 > num3) ? num1 : num3;
	else
		return(num2 > num3) ? num2 : num3;
}

int Minsel(int num1, int num2, int num3)
{
	if (num1 < num2)
		return(num1 < num3) ? num1 : num3;
	else
		return(num2 < num3) ? num2 : num3;
}

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수를 입력하세요:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("세 개의 정수중 가장 큰 수: %d \n", Maxsel(num1, num2, num3));
	printf("세 개의 정수중 가장 작은 수: %d \n", Minsel(num1, num2, num3));
	return 0;
}

