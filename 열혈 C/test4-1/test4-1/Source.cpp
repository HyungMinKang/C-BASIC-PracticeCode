#include <stdio.h>

int main(void)
{
	int num;
	
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num);
	printf("%d�� ����ȭ ���: %d \n", num, ~num + 1);
	return 0;
} 