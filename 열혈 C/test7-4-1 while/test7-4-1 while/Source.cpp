#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total=0;
	
	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d %d", &num1, &num2);

	while (num1 <= num2)
	{
		total += num1;
		num1++;
	}
	printf("��: %d", total);
}
