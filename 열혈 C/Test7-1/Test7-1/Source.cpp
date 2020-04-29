#include <stdio.h>

int main(void)
{
	int num1 ;
	int i = 0;
	printf("출력할 숫자를 입력하세요:");
	scanf_s("%d", &num1);
	
	
	while (i< num1)
	{
		printf("Hello world! %d \n", i);
		i++;
	}
	return 0;
}