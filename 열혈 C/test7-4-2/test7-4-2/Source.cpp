#include <stdio.h>

int main(void)
{
	int input;
	int result=1;
	int num;
	printf("���丮��: ");
	scanf_s("%d", &input);

	for (num = 1; num <= input; num++)
		result = result * num;
	
	printf("%d!=%d", input, result);
	return 0;
}