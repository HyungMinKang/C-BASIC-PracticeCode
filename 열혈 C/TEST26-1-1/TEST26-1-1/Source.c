#include<stdio.h>
#define ADD(X,Y,Z) ((X)+(Y)+(Z))
#define MULTIPLE(X,Y,Z) ((X)*(Y)*(Z))

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("�� ���� ��: %d", ADD(num1,num2,num3));
	printf("�� ���� ��: %d", MULTIPLE(num1, num2, num3));
	return 0;

}