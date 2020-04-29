#include <stdio.h>

int TwoRecursive(int num)
{
	
	if (num == 0)
		return 1 ;
	return TwoRecursive(num - 1) * 2;
	
}

int main(void)
{	
	int num;
	printf("정수입력: ");
	scanf_s("%d", &num);
	printf("2의 %d승: %d", num, TwoRecursive(num));
	return 0;

}
