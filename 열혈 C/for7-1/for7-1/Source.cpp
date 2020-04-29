#include <stdio.h>

int main(void)
{
	int input;
	int num ;
	printf("출력할 횟수를 입력하세요:");
	scanf_s("%d", &input);

	for(num=0; num <input ;num++)
		printf("Hello world! \n");

	return 0;
}