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
	printf("�����Է�: ");
	scanf_s("%d", &num);
	printf("2�� %d��: %d", num, TwoRecursive(num));
	return 0;

}
