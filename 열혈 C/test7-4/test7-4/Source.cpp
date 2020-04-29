#include <stdio.h>

int main(void)
{
	int dan = 0, num = 9;
	printf("¸î´Ü?");
	scanf_s("%d", &dan);
	
	while (num>0)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num = num - 1;

	}
	return 0;
}