#include <stdio.h>

int main(void)
{
	int input=1;
	int total=0 ;
	
	for (; input != 0;)
	{
		printf("정수를 입력하세요: \n");
		scanf_s("%d", &input);
		total += input;
	}
	printf("합: %d", total);
	return 0;
}