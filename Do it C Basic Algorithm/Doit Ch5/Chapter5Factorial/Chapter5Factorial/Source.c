/*���������� ����� ��������� ���Ѵ�(����� �Լ��� ���� ���丮�� ����)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return n * (factorial(n - 1));
	else
		return 1;
}

int main(void)
{
	int x;
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &x);
	printf("%d!(factorial)= %d\n", x, factorial(x));
	return 0;
}

