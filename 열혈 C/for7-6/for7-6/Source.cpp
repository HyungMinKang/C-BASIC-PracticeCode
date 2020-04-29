#include <stdio.h>

int main(void)
{
	int num = 0;
	int input=1;
	int total = 0;

	for (num = 0; num > 5; num++)
	{
		for (; input >1;)
		
			printf("정수를 입력하세요:");
			scanf_s("%d", &input);
		
		
		total += input;
		
	}
	printf("합: %d", total);
	return 0;

}