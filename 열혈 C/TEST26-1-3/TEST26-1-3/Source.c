#include <stdio.h>
#define MAX(x,y) ((x>y)? (x) : (y))

int main(void)
{
	int num1, num2;
	printf("�� ���� �Է�: \n");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ū ���� %d", num1, num2, MAX(num1, num2));
	return 0;
}