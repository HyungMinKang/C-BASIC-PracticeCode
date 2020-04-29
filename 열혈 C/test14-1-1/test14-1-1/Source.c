#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int* ptr)
{	
	int num = *ptr;
	*ptr = num * num;
}


int main(void)
{
	int num, square;
	printf(" 정수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("%d의 제곱: %d \n", num, SquareByValue(num));
	
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
	
}