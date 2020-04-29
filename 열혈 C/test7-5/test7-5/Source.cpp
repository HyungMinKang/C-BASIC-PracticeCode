#include <stdio.h>

int main(void)
{
	int num1=0 , num2=0 ;
	int cnt = 0;
	int sum = 0;
	
	
	printf("몇 개의 정수를 입력할 것인가: \n");
	scanf_s("%d", &num1);
	
	
	while (cnt++ <num1)
	{
		printf("정수를 입력하세요 \n");
	scanf_s("%d", &num2);
	sum += num2; 
	}
	
	printf("평균값은: %f \n", (double)sum/num1);
	return 0;
}