// C����� �ּ�

#include<stdio.h>

int main()
{
	int a = 100;
	double b = 3.14;

	puts("-------------");
	puts(" C����� �ּ� ");
	puts(" ---------------");

	printf(" a= %d, &a=%d \n", a, &a);
	printf(" b= %.2lf, &b= %d \n", b, &b);
	printf(" a= %d byte, b= %d byte \n", sizeof(a), sizeof(b));
	puts("-------------------------------------");

	puts(" &a�� a�� �����ּҸ� �ǹ� ");
	puts("�ּ��� ������ ����Ʈ ");
	puts("-----------------------------------");
	return 0; 
}