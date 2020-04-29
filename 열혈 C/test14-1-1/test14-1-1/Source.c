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
	printf(" ������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("%d�� ����: %d \n", num, SquareByValue(num));
	
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
	
}