#include <stdio.h>

int main(void)
{
	int input=0 ,innum=0;
	int sum=0;
	int num=0;

	printf("몇 개의 정수를 입력할 것인가:");
	scanf_s("%d", &input);
	
	for (num = 0; num < input; num++)
	{
		printf("정수를 입력하세요:");
		scanf_s("%d", &innum);
		sum += innum;
	}
	
	printf("평균: %f", (double)sum/input);
	return 0;
}