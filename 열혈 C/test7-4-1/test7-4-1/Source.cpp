#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total;
	
	
	printf("�� ���� ������ �Է��ϼ���:");
	scanf_s("%d %d", &num1, &num2);

	for (total=0; num1 <= num2; num1++)
		total += num1;

	
	printf("��: %d \n", total);
	return 0;
}