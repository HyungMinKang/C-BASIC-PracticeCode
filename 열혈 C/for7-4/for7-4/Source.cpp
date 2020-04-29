#include <stdio.h>

int main(void)
{
	int input;
	int num;
	
	printf("¸î ´Ü?");
	scanf_s("%d", &input);

	for (num = 9; num != 0; num--)
		printf("%d*%d=%d \n", input, num, input * num);

	return 0;
}